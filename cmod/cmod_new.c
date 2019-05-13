/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** new
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/user.h>
#include <sys/syscall.h>
#include "cmod.h"

class_t *__new__(class_t *std, ...)
{
    va_list args;
    va_start(args, std);
    size_t size = std->size;
    class_t *elem = calloc(size, 1);
    memcpy(elem, std, size);
    elem->ctor(elem, &args);
    va_end(args);
    return ((class_t *) elem);
}