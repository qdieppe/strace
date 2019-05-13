/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace_args
*/

#include "strace.h"

void strace_args_ctor(struct strace_args *self, va_list *args)
{
    int argc = va_arg(*args, int);
    char **argv = va_arg(*args, char **);
    self->set_args = &strace_args_set_args;
    self->get_mod = &strace_args_get_mod;
    self->get_display_mod = &strace_args_get_display_mod;
    self->display = &strace_args_display;

    set_args(self, argc, argv);
}

void strace_args_dtor(struct strace_args *self)
{
    free(self);
}

void strace_args_set_args(struct strace_args *self, int argc, char **argv)
{
    pid_t process = -1;
    self->_args = NULL;

    if ((process = strace_get_process(argc, argv)) != -1) {
        self->_pid = process;
        self->_command = "";
        self->_mod = PID;
    } else {
        self->_pid = -1;
        self->_command = strace_get_command(argc, argv);
        self->_mod = PROGRAM;
        self->_args = strace_get_command_argv(argc, argv);
    }
    if (!strcmp(self->_command, "--help"))
        self->_mod = HELP;
    if (!strncmp(self->_command, "-", 1))
        self->_mod = ERROR;
    self->_display = strace_get_display(argc, argv);
}

strace_display_mod_t strace_args_get_display_mod(struct strace_args *self)
{
    return (self->_display);
}

strace_mod_t strace_args_get_mod(struct strace_args *self)
{
    return (self->_mod);
}

void strace_args_display(struct strace_args *self)
{
    size_t i = 0;
    printf("STRACE ARGS\n");
    if (self->_command != NULL)
        printf("COMMAND : %s\n", self->_command);
    printf("MOD : %s\n", (self->_mod == PID) ? "PID" : "PROGRAM");
    printf("PID : %d\n", self->_pid);
    printf("DISPLAY : %s\n", (get_display_mod(self) == CLASSIC) ? "CLASSIC" : "STRACE");
    printf("ARGS\n");
    if (self->_args == NULL) {
        printf("NULL\n");
        return;
    }
    while (self->_args[i]) {
        printf("%s\n", self->_args[i]);
        i++;
    }
}

const strace_args_t strace_args = {
    .class_structure = {
        .ctor = (void (*)(class_t *, va_list *)) &strace_args_ctor,
        .dtor = (void (*)(class_t *)) &strace_args_dtor,
        .size = sizeof(strace_args_t)
    }
};

class_t *strace_args_class = ((class_t *) &strace_args);