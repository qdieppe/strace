/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace_syscall_object
*/

#ifndef STRACE_SYSCALL_OBJECT_H_
#define STRACE_SYSCALL_OBJECT_H_

#include <sys/types.h>
#include "cmod.h"
#include "strace_args.h"
#include "strace_info.h"

#define MAX_NAME_SIZE 256
#define MAX_REGS 16
#define MAX_TYPENAME_LENGTH 16

#define IS_SYSCALL(value) ((value & 0xffff) == 0x050F)

typedef struct __attribute__((packed)) strace_syscall_primary_info
{
    int syscall_code;
    char *name;
    char *args_type[MAX_REGS];
    size_t args_size;
}strace_syscall_primary_info_t;

typedef enum is_syscall
{
    SYSCALL,
    OTHER_OP
}is_syscall_t;

typedef struct __attribute__((packed)) strace_syscall_object
{
    class_t class_structure;

    strace_syscall_primary_info_t _primary_info;
    is_syscall_t _is_syscall;
    int *_status;
    u_int64_t _args[MAX_REGS];
    u_int64_t _ret;

    void (*fill_arguments)(struct strace_syscall_object *self, pid_t process);
    void (*refresh_from_regs)(struct strace_syscall_object *self, pid_t process);
    void (*display)(struct strace_syscall_object *self);
    void (*display_strace)(struct strace_syscall_object *self, pid_t process);
    void (*display_auto)(struct strace_syscall_object *self, pid_t process, strace_args_t *args);
}strace_syscall_object_t;

#define display_strace(self, pid) (self->display_strace(self, pid))
#define display_auto(self, pid, args) (self->display_auto(self, pid, args))
#define refresh_from_regs(self, pid) (self->refresh_from_regs(self, pid))
#define fill_arguments(self, pid) (self->fill_arguments(self, pid))

void strace_syscall_object_ctor(strace_syscall_object_t *self, va_list *list);
void strace_syscall_object_dtor(strace_syscall_object_t *self);
void strace_syscall_object_fill_arguments(strace_syscall_object_t *self, pid_t process);
void strace_syscall_object_refresh_from_regs(strace_syscall_object_t *self, pid_t process);
void strace_syscall_object_display(struct strace_syscall_object *self);
void strace_syscall_object_display_strace(struct strace_syscall_object *self, pid_t pid);
void strace_syscall_object_display_auto(struct strace_syscall_object *self, pid_t pid, strace_args_t *args);

void strace_setargs_switch(strace_syscall_object_t *self, strace_info_t *info, size_t i);

u_int8_t strace_is_string(char *type);
u_int8_t strace_is_int(char *type);
void strace_print_argument(u_int64_t args, char *type, pid_t pid, int size);

extern class_t *strace_syscall_class;

#endif /* !SYSCALL_OBJECT_H_ */