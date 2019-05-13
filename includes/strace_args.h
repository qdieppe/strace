/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace_args
*/

#ifndef STRACE_ARGS_H_
#define STRACE_ARGS_H_

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/user.h>
#include <sys/syscall.h>
#include <stdarg.h>
#include <sys/types.h>
#include "cmod.h"

typedef enum strace_display_mod
{
    CLASSIC,
    STRACE
}strace_display_mod_t;

typedef enum strace_mod
{
    PID,
    PROGRAM,
    HELP,
    ERROR
}strace_mod_t;

typedef struct __attribute__((packed)) strace_args
{
    class_t class_structure;

    char *_command;
    char **_args;
    pid_t _pid;
    strace_mod_t _mod;
    strace_display_mod_t _display;

    void (*set_args)(struct strace_args *self, int argc, char **argv);

    strace_display_mod_t (*get_display_mod)(struct strace_args *self);
    strace_mod_t (*get_mod)(struct strace_args *self);
    void (*display)(struct strace_args *self);
}strace_args_t;

#define set_args(self, argc, argv) (self->set_args(self, argc, argv))
#define get_display_mod(self) (self->get_display_mod(self))
#define get_mod(self) (self->get_mod(self))
#define display(self) (self->display(self))

void strace_args_ctor(struct strace_args *self, va_list *args);
void strace_args_dtor(struct strace_args *self);
void strace_args_set_args(struct strace_args *self, int argc, char **argv);
strace_display_mod_t strace_args_get_display_mod(struct strace_args *self);
strace_mod_t strace_args_get_mod(struct strace_args *self);
void strace_args_display(struct strace_args *self);

pid_t strace_get_process(int argc, char **argv);
char *strace_get_command(int argc, char **argv);
char **strace_get_command_argv(int argc, char **argv);
strace_display_mod_t strace_get_display(int argc, char **argv);

extern class_t *strace_args_class;
#endif /* !STRACE_ARGS_H_ */
