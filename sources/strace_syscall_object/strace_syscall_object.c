/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace_syscall_object
*/

#include "strace_info.h"
#include "strace.h"

void strace_syscall_object_ctor(strace_syscall_object_t *self, va_list *list)
{
    int *status = va_arg(*list, int *);
    
    self->_status = status;
    self->display = &strace_syscall_object_display;
    self->display_strace = &strace_syscall_object_display_strace;
    self->refresh_from_regs = &strace_syscall_object_refresh_from_regs;
    self->fill_arguments = &strace_syscall_object_fill_arguments;
    self->display_auto = &strace_syscall_object_display_auto;
}

void strace_syscall_object_dtor(strace_syscall_object_t *self)
{
    free(self);
}

void strace_syscall_object_fill_arguments(strace_syscall_object_t *self, pid_t process)
{
    size_t i = 0;
    size_t size = self->_primary_info.args_size;
    strace_info_t *info = (strace_info_t *) __new__(strace_info_class, process);
    set_regs(info, process);
    
    while (i < size) {
        strace_setargs_switch(self, info, i);
        i++;
    }
    __delete__((class_t *) info);
}

void strace_syscall_object_refresh_from_regs(strace_syscall_object_t *self, pid_t process)
{
    strace_syscall_primary_info_t *syscall_info = NULL;
    strace_info_t *info = (strace_info_t *) __new__(strace_info_class, process);
    int is_syscall = 0;
    int syscall_code = 0;
    
    set_regs(info, process);
    is_syscall = ptrace(PTRACE_PEEKTEXT, process, info->_regs.rip, NULL);

    if (!IS_SYSCALL(is_syscall)) {
        self->_is_syscall = OTHER_OP;
        __delete__((class_t *) info);
        return;
    }
    self->_is_syscall = SYSCALL;
    syscall_code = info->_regs.rax;
    syscall_info = get_syscall(syscall_code);
    memcpy(&(self->_primary_info), syscall_info, sizeof(strace_syscall_primary_info_t));

    fill_arguments(self, process);
    ptrace(PTRACE_SINGLESTEP, process, NULL, NULL);
    waitpid(process, self->_status, 0);
    set_regs(info, process);
    self->_ret = info->_regs.rax;
    __delete__((class_t *) info);
}

void strace_syscall_object_display(struct strace_syscall_object *self)
{
    size_t i = 0;
    char *name = self->_primary_info.name;
    size_t size = self->_primary_info.args_size;
    u_int64_t *args = self->_args;
    u_int64_t ret = self->_ret;
    size_t size_minus_one = size - 1;

    if (self->_is_syscall != SYSCALL)
        return;
    fprintf(stderr, "%s(", name);
    while (i < size && i < MAX_REGS) {
        if (i < size_minus_one && i < (MAX_REGS - 1))
            fprintf(stderr, "0x%lx, ", args[i]);
        else
            fprintf(stderr, "0x%lx", args[i]);
        i++;
    }
    fprintf(stderr, ") = 0x%lx\n", ret);
}

void strace_syscall_object_display_strace(struct strace_syscall_object *self, pid_t pid)
{
    size_t i = 0;
    char *name = self->_primary_info.name;
    size_t size = self->_primary_info.args_size;
    u_int64_t *args = self->_args;
    u_int64_t ret = self->_ret;
    size_t size_minus_one = size - 1;

    if (self->_is_syscall != SYSCALL)
        return;
    fprintf(stderr, "%s(", name);
    while (i < size && i < MAX_REGS) {
        if (self->_primary_info.syscall_code == SYS_write)
            strace_print_argument(args[i], self->_primary_info.args_type[i], pid, args[2]);
        else
            strace_print_argument(args[i], self->_primary_info.args_type[i], pid, -1);
        if (i < size_minus_one && i < (MAX_REGS - 1))
            fprintf(stderr, ", ");
        i++;
    }
    fprintf(stderr, ") = 0x%lx\n", ret);
}

void strace_syscall_object_display_auto(struct strace_syscall_object *self, pid_t pid, strace_args_t *args)
{
    if (args->_display == STRACE)
        display_strace(self, pid);
    else
        display(self);    
}

static strace_syscall_object_t strace_syscall = {
    .class_structure = {
        .ctor = (void (*)(class_t *, va_list *)) &strace_syscall_object_ctor,
        .dtor = (void (*)(class_t *)) &strace_syscall_object_dtor,
        .size = sizeof(strace_syscall_object_t)
    }
};

class_t *strace_syscall_class = (class_t *) &strace_syscall;