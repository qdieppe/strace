/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace_syscall_info
*/

#ifndef STRACE_SYSCALL_INFO_H_
#define STRACE_SYSCALL_INFO_H_

extern const strace_syscall_primary_info_t syscalls_info[];
extern const strace_syscall_primary_info_t unknown;
strace_syscall_primary_info_t *get_syscall(int syscall_code);

#endif /* !SYSCALL_INFO_H_ */
