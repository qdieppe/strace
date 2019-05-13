/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/reg.h>
#include <sys/syscall.h>
#include <signal.h>
#include "strace_syscall_object.h"
#include "strace.h"

int strace_prog(char *progname, char **argv, strace_args_t *args)
{
    int status = 0;
    strace_syscall_object_t *sys = (strace_syscall_object_t *) __new__(strace_syscall_class, &status);
    pid_t pid = fork();

    if (pid == 0) {
        ptrace(PTRACE_TRACEME, 0, 0, 0);
        execvp(progname, argv);
    } else {
        waitpid(pid, &status, 0);
        while (42) {
            ptrace(PTRACE_SINGLESTEP, pid, NULL, NULL);
            waitpid(pid, &status, 0);
            refresh_from_regs(sys, pid);
            display_auto(sys, pid, args);
            if (WIFEXITED(status) || WIFSIGNALED(status))
                break;
        }
    }
    __delete__((class_t *) sys);
    return (0);
}

int strace_pid(pid_t pid, strace_args_t *args)
{
    int status = 0;
    strace_syscall_object_t *sys = (strace_syscall_object_t *) __new__(strace_syscall_class, &status);
    waitpid(pid, &status, 0);
    ptrace(PTRACE_ATTACH, pid, NULL, NULL);
    waitpid(pid, &status, 0);
    while (42) {
        ptrace(PTRACE_SINGLESTEP, pid, NULL, NULL);
        waitpid(pid, &status, 0);
        refresh_from_regs(sys, pid);
        display_auto(sys, pid, args);
        if (WIFEXITED(status) || WIFSIGNALED(status))
            break;
    }
    __delete__((class_t *) sys);
    return (0);
}

int strace(strace_args_t *args)
{
    if (args->_mod == PID)
        return ((args->_pid) ? strace_pid(args->_pid, args) : 84);
    if (!strcmp(args->_command, "--help")) {
        display_help();
        return (0);
    }
    if (!strcmp(args->_command, "") || !strcmp(args->_command, "-s"))
        return (84);
    return (strace_prog(args->_command, args->_args, args));
}

int main(int argc, char **argv)
{
    int ret = 0;
    strace_args_t *args = (strace_args_t *) __new__(strace_args_class, argc, argv);
    ret = strace(args);
    __delete__((class_t *) args);
    return (ret);
}