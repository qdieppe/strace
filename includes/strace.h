/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace
*/

#ifndef STRACE_H_
#define STRACE_H_

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/user.h>
#include <sys/syscall.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
#include "cmod.h"
#include "strace_info.h"
#include "strace_syscall_object.h"
#include "strace_args.h"
#include "strace_syscall_info.h"

typedef struct strace_info strace_info_t;

void display_help(void);

#endif /* !STRACE_H_ */
