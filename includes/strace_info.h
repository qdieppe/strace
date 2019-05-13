/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace_info
*/

#ifndef STRACE_INFO_H_
#define STRACE_INFO_H_

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/user.h>
#include <sys/syscall.h>
#include <stdarg.h>
#include <sys/types.h>
#include "cmod.h"

typedef struct __attribute__((packed)) strace_info
{
    class_t class_structure;

    pid_t _process;
    struct user_regs_struct _regs;

    void (*set_process)(struct strace_info *self, pid_t process);
    void (*set_regs)(struct strace_info *self, pid_t process);

}strace_info_t;

#define set_regs(self, pid) self->set_regs(self, pid)

void strace_info_ctor(class_t *std, va_list *list);
void strace_info_dtor(class_t *std);
void strace_info_set_process(struct strace_info *self, pid_t process);
void strace_info_set_regs(struct strace_info *self, pid_t process);

extern class_t *strace_info_class;
#endif /* !STRACE_INFO_H_ */
