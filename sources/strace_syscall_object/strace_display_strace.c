/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace_display_strace
*/

#include "strace.h"

u_int8_t strace_is_int(char *type)
{
    if (!strcmp(type, "int"))
        return (1);
    if (!strcmp(type, "unsigned int"))
        return (1);
    if (!strcmp(type, "size_t"))
        return (1);
    if (!strcmp(type, "long"))
        return (1);
    return (0);
}

u_int8_t strace_is_string(char *type)
{
    if (!strcmp(type, "char *"))
        return (1);
    if (!strcmp(type, "const char __user *"))
        return (1);
    return (0);
}

void strace_print_argument(u_int64_t args, char *type, pid_t pid, int size)
{
    int i = 0;
    char data = 0;

    if (strace_is_string(type)) {
        fprintf(stderr, "\"");
        do {
            data = ptrace(PTRACE_PEEKTEXT, pid, args + i, NULL);
            fprintf(stderr, "%c", data);
            i++;
        } while (data && (size == -1 || i < size));
        fprintf(stderr, "\"");
    }
    else if (strace_is_int(type))
        fprintf(stderr, "%ld", args);
    else
        fprintf(stderr, "0x%lx", args);
    
}

