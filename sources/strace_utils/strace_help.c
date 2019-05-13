/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace_help
*/

#include "strace.h"

void display_help(void)
{
    fprintf(stderr, "USAGE: ./strace [-s] [-p <pid>|<command>]\n");
}