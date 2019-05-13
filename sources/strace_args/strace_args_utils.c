/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace_args_utils
*/

#include "strace.h"

pid_t strace_get_process(int argc, char **argv)
{
    int i = 1;

    while (i < argc)
    {
        if (!strcmp(argv[i], "-p") && (i + 1) < argc) {
            return atoi(argv[i + 1]);
        }
        i++;
    }
    return (-1);
}

strace_display_mod_t strace_get_display(int argc, char **argv)
{
    int i = 1;

    while (i < argc)
    {
        if (!strcmp(argv[i], "-s")) {
            return (STRACE);
        }
        i++;
    }
    return (CLASSIC);
}

char *strace_get_command(int argc, char **argv)
{
    if (argc >= 3) {
        if (strcmp(argv[1], "-s"))
            return ((argv[1]));
        else
            return ((argv[2]));
    }
    if (argc == 2)
        return (argv[1]);
    return ("");
}

char **strace_get_command_argv(int argc, char **argv)
{
    if (argc >= 3) {
        if (strcmp(argv[1], "-s"))
            return (&(argv[2]));
        else
            return (&(argv[1]));
    }
    if (argc == 2)
        return (&(argv[1]));
    return (NULL);
}