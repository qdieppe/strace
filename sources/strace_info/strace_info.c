
#include "strace.h"

void strace_info_ctor(class_t *std, va_list *list)
{
    pid_t process = va_arg(*list, pid_t);
    strace_info_t *self = (strace_info_t *) std;
    self->_process = process;
    self->set_process = &strace_info_set_process;
    self->set_regs = &strace_info_set_regs;
}

void strace_info_dtor(class_t *std)
{
    free(std);
}

void strace_info_set_process(struct strace_info *self, pid_t process)
{
    self->_process = process;
}

void strace_info_set_regs(struct strace_info *self, pid_t process)
{
    ptrace(PTRACE_GETREGS, process, NULL, &(self->_regs));
}

const strace_info_t strace_info = {
    .class_structure = {
        .ctor = &strace_info_ctor,
        .dtor = &strace_info_dtor,
        .size = sizeof(strace_info_t)
    }
};

class_t *strace_info_class = ((class_t *) &strace_info);