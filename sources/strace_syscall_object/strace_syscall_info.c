/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace_syscall_info
*/

#include "strace.h"

const strace_syscall_primary_info_t syscalls_info[] = {
    {.syscall_code = 0,
     .name = "read",
     .args_type = {"unsigned int", "char __user *", "size_t"},
     .args_size = 3
    },
    {.syscall_code = 1,
     .name = "write",
     .args_type = {"unsigned int", "const char __user *", "size_t"},
     .args_size = 3
    },
    {.syscall_code = 2,
     .name = "open",
     .args_type = {"const char __user *", "int", "umode_t"},
     .args_size = 3
    },
    {.syscall_code = 3,
     .name = "close",
     .args_type = {"unsigned int"},
     .args_size = 1
    },
    {.syscall_code = 4,
     .name = "stat",
     .args_type = {"const char __user *", "struct stat __user *"},
     .args_size = 2
    },
    {.syscall_code = 5,
     .name = "fstat",
     .args_type = {"unsigned int", "struct stat __user *"},
     .args_size = 2
    },
    {.syscall_code = 6,
     .name = "lstat",
     .args_type = {"const char __user *", "struct stat __user *"},
     .args_size = 2
    },
    {.syscall_code = 7,
     .name = "poll",
     .args_type = {"struct pollfd __user *", "unsigned int", "int"},
     .args_size = 3
    },
    {.syscall_code = 8,
     .name = "lseek",
     .args_type = {"unsigned int", "off_t", "unsigned int"},
     .args_size = 3
    },
    {.syscall_code = 9,
     .name = "mmap",
     .args_type = {"unsigned long", "unsigned long", "unsigned long", "unsigned long", "unsigned long", "unsigned long"},
     .args_size = 6
    },
    {.syscall_code = 10,
     .name = "mprotect",
     .args_type = {"unsigned long", "size_t", "unsigned long"},
     .args_size = 3
    },
    {.syscall_code = 11,
     .name = "munmap",
     .args_type = {"unsigned long", "size_t"},
     .args_size = 2
    },
    {.syscall_code = 12,
     .name = "brk",
     .args_type = {"unsigned long"},
     .args_size = 1
    },
    {.syscall_code = 13,
     .name = "rt_sigaction",
     .args_type = {"int", "const struct sigaction __user *", "struct sigaction __user *", "size_t"},
     .args_size = 4
    },
    {.syscall_code = 14,
     .name = "rt_sigprocmask",
     .args_type = {"int", "sigset_t __user *", "sigset_t __user *", "size_t"},
     .args_size = 4
    },
    {.syscall_code = 15,
     .name = "rt_sigreturn",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 16,
     .name = "ioctl",
     .args_type = {"unsigned int", "unsigned int", "unsigned long"},
     .args_size = 3
    },
    {.syscall_code = 17,
     .name = "pread64",
     .args_type = {"unsigned int", "char __user *", "size_t", "loff_t"},
     .args_size = 4
    },
    {.syscall_code = 18,
     .name = "pwrite64",
     .args_type = {"unsigned int", "const char __user *", "size_t", "loff_t"},
     .args_size = 4
    },
    {.syscall_code = 19,
     .name = "readv",
     .args_type = {"unsigned long", "const struct iovec __user *", "unsigned long"},
     .args_size = 3
    },
    {.syscall_code = 20,
     .name = "writev",
     .args_type = {"unsigned long", "const struct iovec __user *", "unsigned long"},
     .args_size = 3
    },
    {.syscall_code = 21,
     .name = "access",
     .args_type = {"const char __user *", "int"},
     .args_size = 2
    },
    {.syscall_code = 22,
     .name = "pipe",
     .args_type = {"int __user *"},
     .args_size = 1
    },
    {.syscall_code = 23,
     .name = "select",
     .args_type = {"int", "fd_set __user *", "fd_set __user *", "fd_set __user *", "struct timeval __user *"},
     .args_size = 5
    },
    {.syscall_code = 24,
     .name = "sched_yield",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 25,
     .name = "mremap",
     .args_type = {"unsigned long"},
     .args_size = 1
    },
    {.syscall_code = 26,
     .name = "msync",
     .args_type = {"unsigned long", "size_t", "int"},
     .args_size = 3
    },
    {.syscall_code = 27,
     .name = "mincore",
     .args_type = {"unsigned long", "size_t", "unsigned char __user *"},
     .args_size = 3
    },
    {.syscall_code = 28,
     .name = "madvise",
     .args_type = {"unsigned long", "size_t", "int"},
     .args_size = 3
    },
    {.syscall_code = 29,
     .name = "shmget",
     .args_type = {"key_t", "size_t", "int"},
     .args_size = 3
    },
    {.syscall_code = 30,
     .name = "shmat",
     .args_type = {"int", "char __user *", "int"},
     .args_size = 3
    },
    {.syscall_code = 31,
     .name = "shmctl",
     .args_type = {"int", "int", "struct shmid_ds __user *"},
     .args_size = 3
    },
    {.syscall_code = 32,
     .name = "dup",
     .args_type = {"unsigned int"},
     .args_size = 1
    },
    {.syscall_code = 33,
     .name = "dup2",
     .args_type = {"unsigned int", "unsigned int"},
     .args_size = 2
    },
    {.syscall_code = 34,
     .name = "pause",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 35,
     .name = "nanosleep",
     .args_type = {"struct timespec __user *", "struct timespec __user *"},
     .args_size = 2
    },
    {.syscall_code = 36,
     .name = "getitimer",
     .args_type = {"int", "struct itimerval __user *"},
     .args_size = 2
    },
    {.syscall_code = 37,
     .name = "alarm",
     .args_type = {"unsigned int"},
     .args_size = 1
    },
    {.syscall_code = 38,
     .name = "setitimer",
     .args_type = {"int", "struct itimerval __user *", "struct itimerval __user *"},
     .args_size = 3
    },
    {.syscall_code = 39,
     .name = "getpid",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 40,
     .name = "sendfile",
     .args_type = {"int", "int", "loff_t __user *", "size_t"},
     .args_size = 4
    },
    {.syscall_code = 41,
     .name = "socket",
     .args_type = {"int", "int", "int"},
     .args_size = 3
    },
    {.syscall_code = 42,
     .name = "connect",
     .args_type = {"int", "struct sockaddr __user *", "int"},
     .args_size = 3
    },
    {.syscall_code = 43,
     .name = "accept",
     .args_type = {"int", "struct sockaddr __user *", "int __user *"},
     .args_size = 3
    },
    {.syscall_code = 44,
     .name = "sendto",
     .args_type = {"int", "void __user *", "size_t", "unsigned int", "struct sockaddr __user *", "int"},
     .args_size = 6
    },
    {.syscall_code = 45,
     .name = "recvfrom",
     .args_type = {"int", "void __user *", "size_t", "unsigned int", "struct sockaddr __user *", "int __user *"},
     .args_size = 6
    },
    {.syscall_code = 46,
     .name = "sendmsg",
     .args_type = {"int", "struct msghdr __user *", "unsigned int"},
     .args_size = 3
    },
    {.syscall_code = 47,
     .name = "recvmsg",
     .args_type = {"int", "struct msghdr __user *", "unsigned int"},
     .args_size = 3
    },
    {.syscall_code = 48,
     .name = "shutdown",
     .args_type = {"int", "int"},
     .args_size = 2
    },
    {.syscall_code = 49,
     .name = "bind",
     .args_type = {"int", "struct sockaddr __user *", "int"},
     .args_size = 3
    },
    {.syscall_code = 50,
     .name = "listen",
     .args_type = {"int", "int"},
     .args_size = 2
    },
    {.syscall_code = 51,
     .name = "getsockname",
     .args_type = {"int", "struct sockaddr __user *", "int __user *"},
     .args_size = 3
    },
    {.syscall_code = 52,
     .name = "getpeername",
     .args_type = {"int", "struct sockaddr __user *", "int __user *"},
     .args_size = 3
    },
    {.syscall_code = 53,
     .name = "socketpair",
     .args_type = {"int", "int", "int", "int __user *"},
     .args_size = 4
    },
    {.syscall_code = 54,
     .name = "setsockopt",
     .args_type = {"int", "int", "int", "char __user *", "int"},
     .args_size = 5
    },
    {.syscall_code = 55,
     .name = "getsockopt",
     .args_type = {"int", "int", "int", "char __user *", "int __user *"},
     .args_size = 5
    },
    {.syscall_code = 56,
     .name = "clone",
     .args_type = {"unsigned long", "unsigned long", "int __user *", "int __user *", "int"},
     .args_size = 5
    },
    {.syscall_code = 57,
     .name = "fork",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 58,
     .name = "vfork",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 59,
     .name = "execve",
     .args_type = {"const char __user *", "const char __user *const __user *", "const char __user *const __user *"},
     .args_size = 3
    },
    {.syscall_code = 60,
     .name = "exit",
     .args_type = {"int"},
     .args_size = 1
    },
    {.syscall_code = 61,
     .name = "wait4",
     .args_type = {"pid_t", "int __user *", "int", "struct rusage __user *"},
     .args_size = 4
    },
    {.syscall_code = 62,
     .name = "kill",
     .args_type = {"pid_t", "int"},
     .args_size = 2
    },
    {.syscall_code = 63,
     .name = "uname",
     .args_type = {"struct new_utsname __user *"},
     .args_size = 1
    },
    {.syscall_code = 64,
     .name = "semget",
     .args_type = {"key_t", "int", "int"},
     .args_size = 3
    },
    {.syscall_code = 65,
     .name = "semop",
     .args_type = {"int", "struct sembuf __user *", "unsigned"},
     .args_size = 3
    },
    {.syscall_code = 66,
     .name = "semctl",
     .args_type = {"int", "int", "int", "unsigned long"},
     .args_size = 4
    },
    {.syscall_code = 67,
     .name = "shmdt",
     .args_type = {"char __user *"},
     .args_size = 1
    },
    {.syscall_code = 68,
     .name = "msgget",
     .args_type = {"key_t", "int"},
     .args_size = 2
    },
    {.syscall_code = 69,
     .name = "msgsnd",
     .args_type = {"int", "struct msgbuf __user *", "size_t", "int"},
     .args_size = 4
    },
    {.syscall_code = 70,
     .name = "msgrcv",
     .args_type = {"int", "struct msgbuf __user *", "size_t", "long", "int"},
     .args_size = 5
    },
    {.syscall_code = 71,
     .name = "msgctl",
     .args_type = {"int", "int", "struct msqid_ds __user *"},
     .args_size = 3
    },
    {.syscall_code = 72,
     .name = "fcntl",
     .args_type = {"unsigned int", "unsigned int", "unsigned long"},
     .args_size = 3
    },
    {.syscall_code = 73,
     .name = "flock",
     .args_type = {"unsigned int", "unsigned int"},
     .args_size = 2
    },
    {.syscall_code = 74,
     .name = "fsync",
     .args_type = {"unsigned int"},
     .args_size = 1
    },
    {.syscall_code = 75,
     .name = "fdatasync",
     .args_type = {"unsigned int"},
     .args_size = 1
    },
    {.syscall_code = 76,
     .name = "truncate",
     .args_type = {"const char __user *", "long"},
     .args_size = 2
    },
    {.syscall_code = 77,
     .name = "ftruncate",
     .args_type = {"unsigned int", "unsigned long"},
     .args_size = 2
    },
    {.syscall_code = 78,
     .name = "getdents",
     .args_type = {"unsigned int", "struct linux_dirent __user *", "unsigned int"},
     .args_size = 3
    },
    {.syscall_code = 79,
     .name = "getcwd",
     .args_type = {"char __user *", "unsigned long"},
     .args_size = 2
    },
    {.syscall_code = 80,
     .name = "chdir",
     .args_type = {"const char __user *"},
     .args_size = 1
    },
    {.syscall_code = 81,
     .name = "fchdir",
     .args_type = {"unsigned int"},
     .args_size = 1
    },
    {.syscall_code = 82,
     .name = "rename",
     .args_type = {"const char __user *", "const char __user *"},
     .args_size = 2
    },
    {.syscall_code = 83,
     .name = "mkdir",
     .args_type = {"const char __user *", "umode_t"},
     .args_size = 2
    },
    {.syscall_code = 84,
     .name = "rmdir",
     .args_type = {"const char __user *"},
     .args_size = 1
    },
    {.syscall_code = 85,
     .name = "creat",
     .args_type = {"const char __user *", "umode_t"},
     .args_size = 2
    },
    {.syscall_code = 86,
     .name = "link",
     .args_type = {"const char __user *", "const char __user *"},
     .args_size = 2
    },
    {.syscall_code = 87,
     .name = "unlink",
     .args_type = {"const char __user *"},
     .args_size = 1
    },
    {.syscall_code = 88,
     .name = "symlink",
     .args_type = {"const char __user *", "const char __user *"},
     .args_size = 2
    },
    {.syscall_code = 89,
     .name = "readlink",
     .args_type = {"const char __user *", "char __user *", "int"},
     .args_size = 3
    },
    {.syscall_code = 90,
     .name = "chmod",
     .args_type = {"const char __user *", "umode_t"},
     .args_size = 2
    },
    {.syscall_code = 91,
     .name = "fchmod",
     .args_type = {"unsigned int", "umode_t"},
     .args_size = 2
    },
    {.syscall_code = 92,
     .name = "chown",
     .args_type = {"const char __user *", "uid_t", "gid_t"},
     .args_size = 3
    },
    {.syscall_code = 93,
     .name = "fchown",
     .args_type = {"unsigned int", "uid_t", "gid_t"},
     .args_size = 3
    },
    {.syscall_code = 94,
     .name = "lchown",
     .args_type = {"const char __user *", "uid_t", "gid_t"},
     .args_size = 3
    },
    {.syscall_code = 95,
     .name = "umask",
     .args_type = {"int"},
     .args_size = 1
    },
    {.syscall_code = 96,
     .name = "gettimeofday",
     .args_type = {"struct timeval __user *", "struct timezone __user *"},
     .args_size = 2
    },
    {.syscall_code = 97,
     .name = "getrlimit",
     .args_type = {"unsigned int", "struct rlimit __user *"},
     .args_size = 2
    },
    {.syscall_code = 98,
     .name = "getrusage",
     .args_type = {"int", "struct rusage __user *"},
     .args_size = 2
    },
    {.syscall_code = 99,
     .name = "sysinfo",
     .args_type = {"struct sysinfo __user *"},
     .args_size = 1
    },
    {.syscall_code = 100,
     .name = "times",
     .args_type = {"struct tms __user *"},
     .args_size = 1
    },
    {.syscall_code = 101,
     .name = "ptrace",
     .args_type = {"long", "long", "unsigned long", "unsigned long"},
     .args_size = 4
    },
    {.syscall_code = 102,
     .name = "getuid",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 103,
     .name = "syslog",
     .args_type = {"int", "char __user *", "int"},
     .args_size = 3
    },
    {.syscall_code = 104,
     .name = "getgid",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 105,
     .name = "setuid",
     .args_type = {"uid_t"},
     .args_size = 1
    },
    {.syscall_code = 106,
     .name = "setgid",
     .args_type = {"gid_t"},
     .args_size = 1
    },
    {.syscall_code = 107,
     .name = "geteuid",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 108,
     .name = "getegid",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 109,
     .name = "setpgid",
     .args_type = {"pid_t", "pid_t"},
     .args_size = 2
    },
    {.syscall_code = 110,
     .name = "getppid",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 111,
     .name = "getpgrp",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 112,
     .name = "setsid",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 113,
     .name = "setreuid",
     .args_type = {"uid_t", "uid_t"},
     .args_size = 2
    },
    {.syscall_code = 114,
     .name = "setregid",
     .args_type = {"gid_t", "gid_t"},
     .args_size = 2
    },
    {.syscall_code = 115,
     .name = "getgroups",
     .args_type = {"int", "gid_t __user *"},
     .args_size = 2
    },
    {.syscall_code = 116,
     .name = "setgroups",
     .args_type = {"int", "gid_t __user *"},
     .args_size = 2
    },
    {.syscall_code = 117,
     .name = "setresuid",
     .args_type = {"uid_t", "uid_t", "uid_t"},
     .args_size = 3
    },
    {.syscall_code = 118,
     .name = "getresuid",
     .args_type = {"uid_t __user *", "uid_t __user *", "uid_t __user *"},
     .args_size = 3
    },
    {.syscall_code = 119,
     .name = "setresgid",
     .args_type = {"gid_t", "gid_t", "gid_t"},
     .args_size = 3
    },
    {.syscall_code = 120,
     .name = "getresgid",
     .args_type = {"gid_t __user *", "gid_t __user *", "gid_t __user *"},
     .args_size = 3
    },
    {.syscall_code = 121,
     .name = "getpgid",
     .args_type = {"pid_t"},
     .args_size = 1
    },
    {.syscall_code = 122,
     .name = "setfsuid",
     .args_type = {"uid_t"},
     .args_size = 1
    },
    {.syscall_code = 123,
     .name = "setfsgid",
     .args_type = {"gid_t"},
     .args_size = 1
    },
    {.syscall_code = 124,
     .name = "getsid",
     .args_type = {"pid_t"},
     .args_size = 1
    },
    {.syscall_code = 125,
     .name = "capget",
     .args_type = {"cap_user_header_t", "cap_user_data_t"},
     .args_size = 2
    },
    {.syscall_code = 126,
     .name = "capset",
     .args_type = {"cap_user_header_t", "const cap_user_data_t"},
     .args_size = 2
    },
    {.syscall_code = 127,
     .name = "rt_sigpending",
     .args_type = {"sigset_t __user *", "size_t"},
     .args_size = 2
    },
    {.syscall_code = 128,
     .name = "rt_sigtimedwait",
     .args_type = {"const sigset_t __user *", "siginfo_t __user *", "const struct timespec __user *", "size_t"},
     .args_size = 4
    },
    {.syscall_code = 129,
     .name = "rt_sigqueueinfo",
     .args_type = {"pid_t", "int", "siginfo_t __user *"},
     .args_size = 3
    },
    {.syscall_code = 130,
     .name = "rt_sigsuspend",
     .args_type = {"sigset_t __user *", "size_t"},
     .args_size = 2
    },
    {.syscall_code = 131,
     .name = "sigaltstack",
     .args_type = {"const stack_t __user *", "stack_t __user *"},
     .args_size = 2
    },
    {.syscall_code = 132,
     .name = "utime",
     .args_type = {"char __user *", "struct utimbuf __user *"},
     .args_size = 2
    },
    {.syscall_code = 133,
     .name = "mknod",
     .args_type = {"const char __user *", "umode_t", "unsigned"},
     .args_size = 3
    },
    {.syscall_code = 134,
     .name = "uselib",
     .args_type = {"const char __user *"},
     .args_size = 1
    },
    {.syscall_code = 135,
     .name = "personality",
     .args_type = {"unsigned int"},
     .args_size = 1
    },
    {.syscall_code = 136,
     .name = "ustat",
     .args_type = {"unsigned", "struct ustat __user *"},
     .args_size = 2
    },
    {.syscall_code = 137,
     .name = "statfs",
     .args_type = {"const char __user *", "struct statfs __user *"},
     .args_size = 2
    },
    {.syscall_code = 138,
     .name = "fstatfs",
     .args_type = {"unsigned int", "struct statfs __user *"},
     .args_size = 2
    },
    {.syscall_code = 139,
     .name = "sysfs",
     .args_type = {"int", "unsigned long", "unsigned long"},
     .args_size = 3
    },
    {.syscall_code = 140,
     .name = "getpriority",
     .args_type = {"int", "int"},
     .args_size = 2
    },
    {.syscall_code = 141,
     .name = "setpriority",
     .args_type = {"int", "int", "int"},
     .args_size = 3
    },
    {.syscall_code = 142,
     .name = "sched_setparam",
     .args_type = {"pid_t", "struct sched_param __user *"},
     .args_size = 2
    },
    {.syscall_code = 143,
     .name = "sched_getparam",
     .args_type = {"pid_t", "struct sched_param __user *"},
     .args_size = 2
    },
    {.syscall_code = 144,
     .name = "sched_setscheduler",
     .args_type = {"pid_t", "int", "struct sched_param __user *"},
     .args_size = 3
    },
    {.syscall_code = 145,
     .name = "sched_getscheduler",
     .args_type = {"pid_t"},
     .args_size = 1
    },
    {.syscall_code = 146,
     .name = "sched_get_priority_max",
     .args_type = {"int"},
     .args_size = 1
    },
    {.syscall_code = 147,
     .name = "sched_get_priority_min",
     .args_type = {"int"},
     .args_size = 1
    },
    {.syscall_code = 148,
     .name = "sched_rr_get_interval",
     .args_type = {"pid_t", "struct timespec __user *"},
     .args_size = 2
    },
    {.syscall_code = 149,
     .name = "mlock",
     .args_type = {"unsigned long", "size_t"},
     .args_size = 2
    },
    {.syscall_code = 150,
     .name = "munlock",
     .args_type = {"unsigned long", "size_t"},
     .args_size = 2
    },
    {.syscall_code = 151,
     .name = "mlockall",
     .args_type = {"int"},
     .args_size = 1
    },
    {.syscall_code = 152,
     .name = "munlockall",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 153,
     .name = "vhangup",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 154,
     .name = "modify_ldt",
     .args_type = {"int", "void *", "unsigned long"},
     .args_size = 3
    },
    {.syscall_code = 155,
     .name = "pivot_root",
     .args_type = {"const char __user *", "const char __user *"},
     .args_size = 2
    },
    {.syscall_code = 156,
     .name = "_sysctl",
     .args_type = {"struct __sysctl_args __user *"},
     .args_size = 1
    },
    {.syscall_code = 157,
     .name = "prctl",
     .args_type = {"int", "unsigned long", "unsigned long", "unsigned long", "unsigned long"},
     .args_size = 5
    },
    {.syscall_code = 158,
     .name = "arch_prctl",
     .args_type = {"struct task_struct *", "int", "unsigned long __user *"},
     .args_size = 3
    },
    {.syscall_code = 159,
     .name = "adjtimex",
     .args_type = {"struct timex __user *"},
     .args_size = 1
    },
    {.syscall_code = 160,
     .name = "setrlimit",
     .args_type = {"unsigned int", "struct rlimit __user *"},
     .args_size = 2
    },
    {.syscall_code = 161,
     .name = "chroot",
     .args_type = {"const char __user *"},
     .args_size = 1
    },
    {.syscall_code = 162,
     .name = "sync",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 163,
     .name = "acct",
     .args_type = {"const char __user *"},
     .args_size = 1
    },
    {.syscall_code = 164,
     .name = "settimeofday",
     .args_type = {"struct timeval __user *", "struct timezone __user *"},
     .args_size = 2
    },
    {.syscall_code = 165,
     .name = "mount",
     .args_type = {"char __user *", "char __user *", "char __user *", "unsigned long", "void __user *"},
     .args_size = 5
    },
    {.syscall_code = 166,
     .name = "umount2",
     .args_type = {"char __user *", "int"},
     .args_size = 2
    },
    {.syscall_code = 167,
     .name = "swapon",
     .args_type = {"const char __user *", "int"},
     .args_size = 2
    },
    {.syscall_code = 168,
     .name = "swapoff",
     .args_type = {"const char __user *"},
     .args_size = 1
    },
    {.syscall_code = 169,
     .name = "reboot",
     .args_type = {"int", "int", "unsigned int", "void __user *"},
     .args_size = 4
    },
    {.syscall_code = 170,
     .name = "sethostname",
     .args_type = {"char __user *", "int"},
     .args_size = 2
    },
    {.syscall_code = 171,
     .name = "setdomainname",
     .args_type = {"char __user *", "int"},
     .args_size = 2
    },
    {.syscall_code = 172,
     .name = "iopl",
     .args_type = {"unsigned int"},
     .args_size = 1
    },
    {.syscall_code = 173,
     .name = "ioperm",
     .args_type = {"unsigned long", "unsigned long", "int"},
     .args_size = 3
    },
    {.syscall_code = 174,
     .name = "create_module",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 175,
     .name = "init_module",
     .args_type = {"void __user *", "unsigned long", "const char __user *"},
     .args_size = 3
    },
    {.syscall_code = 176,
     .name = "delete_module",
     .args_type = {"const char __user *", "unsigned int"},
     .args_size = 2
    },
    {.syscall_code = 177,
     .name = "get_kernel_syms",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 178,
     .name = "query_module",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 179,
     .name = "quotactl",
     .args_type = {"unsigned int", "const char __user *", "qid_t", "void __user *"},
     .args_size = 4
    },
    {.syscall_code = 180,
     .name = "nfsservctl",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 181,
     .name = "getpmsg",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 182,
     .name = "putpmsg",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 183,
     .name = "afs_syscall",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 184,
     .name = "tuxcall",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 185,
     .name = "security",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 186,
     .name = "gettid",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 187,
     .name = "readahead",
     .args_type = {"int", "loff_t", "size_t"},
     .args_size = 3
    },
    {.syscall_code = 188,
     .name = "setxattr",
     .args_type = {"const char __user *", "const char __user *", "const void __user *", "size_t", "int"},
     .args_size = 5
    },
    {.syscall_code = 189,
     .name = "lsetxattr",
     .args_type = {"const char __user *", "const char __user *", "const void __user *", "size_t", "int"},
     .args_size = 5
    },
    {.syscall_code = 190,
     .name = "fsetxattr",
     .args_type = {"int", "const char __user *", "const void __user *", "size_t", "int"},
     .args_size = 5
    },
    {.syscall_code = 191,
     .name = "getxattr",
     .args_type = {"const char __user *", "const char __user *", "void __user *", "size_t"},
     .args_size = 4
    },
    {.syscall_code = 192,
     .name = "lgetxattr",
     .args_type = {"const char __user *", "const char __user *", "void __user *", "size_t"},
     .args_size = 4
    },
    {.syscall_code = 193,
     .name = "fgetxattr",
     .args_type = {"int", "const char __user *", "void __user *", "size_t"},
     .args_size = 4
    },
    {.syscall_code = 194,
     .name = "listxattr",
     .args_type = {"const char __user *", "char __user *", "size_t"},
     .args_size = 3
    },
    {.syscall_code = 195,
     .name = "llistxattr",
     .args_type = {"const char __user *", "char __user *", "size_t"},
     .args_size = 3
    },
    {.syscall_code = 196,
     .name = "flistxattr",
     .args_type = {"int", "char __user *", "size_t"},
     .args_size = 3
    },
    {.syscall_code = 197,
     .name = "removexattr",
     .args_type = {"const char __user *", "const char __user *"},
     .args_size = 2
    },
    {.syscall_code = 198,
     .name = "lremovexattr",
     .args_type = {"const char __user *", "const char __user *"},
     .args_size = 2
    },
    {.syscall_code = 199,
     .name = "fremovexattr",
     .args_type = {"int", "const char __user *"},
     .args_size = 2
    },
    {.syscall_code = 200,
     .name = "tkill",
     .args_type = {"pid_t", "int"},
     .args_size = 2
    },
    {.syscall_code = 201,
     .name = "time",
     .args_type = {"time_t __user *"},
     .args_size = 1
    },
    {.syscall_code = 202,
     .name = "futex",
     .args_type = {"u32 __user *", "int", "u32", "struct timespec __user *", "u32 __user *", "u32"},
     .args_size = 6
    },
    {.syscall_code = 203,
     .name = "sched_setaffinity",
     .args_type = {"pid_t", "unsigned int", "unsigned long __user *"},
     .args_size = 3
    },
    {.syscall_code = 204,
     .name = "sched_getaffinity",
     .args_type = {"pid_t", "unsigned int", "unsigned long __user *"},
     .args_size = 3
    },
    {.syscall_code = 205,
     .name = "set_thread_area",
     .args_type = {"struct user_desc __user *"},
     .args_size = 1
    },
    {.syscall_code = 206,
     .name = "io_setup",
     .args_type = {"unsigned", "aio_context_t __user *"},
     .args_size = 2
    },
    {.syscall_code = 207,
     .name = "io_destroy",
     .args_type = {"aio_context_t"},
     .args_size = 1
    },
    {.syscall_code = 208,
     .name = "io_getevents",
     .args_type = {"aio_context_t", "long", "long", "struct io_event __user *", "struct timespec __user *"},
     .args_size = 5
    },
    {.syscall_code = 209,
     .name = "io_submit",
     .args_type = {"aio_context_t", "long", "struct iocb __user * __user *"},
     .args_size = 3
    },
    {.syscall_code = 210,
     .name = "io_cancel",
     .args_type = {"aio_context_t", "struct iocb __user *", "struct io_event __user *"},
     .args_size = 3
    },
    {.syscall_code = 211,
     .name = "get_thread_area",
     .args_type = {"struct user_desc __user *"},
     .args_size = 1
    },
    {.syscall_code = 212,
     .name = "lookup_dcookie",
     .args_type = {"u64", "char __user *", "size_t"},
     .args_size = 3
    },
    {.syscall_code = 213,
     .name = "epoll_create",
     .args_type = {"int"},
     .args_size = 1
    },
    {.syscall_code = 214,
     .name = "epoll_ctl_old",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 215,
     .name = "epoll_wait_old",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 216,
     .name = "remap_file_pages",
     .args_type = {"unsigned long", "unsigned long", "unsigned long", "unsigned long", "unsigned long"},
     .args_size = 5
    },
    {.syscall_code = 217,
     .name = "getdents64",
     .args_type = {"unsigned int", "struct linux_dirent64 __user *", "unsigned int"},
     .args_size = 3
    },
    {.syscall_code = 218,
     .name = "set_tid_address",
     .args_type = {"int __user *"},
     .args_size = 1
    },
    {.syscall_code = 219,
     .name = "restart_syscall",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 220,
     .name = "semtimedop",
     .args_type = {"int", "struct sembuf __user *", "unsigned", "const struct timespec __user *"},
     .args_size = 4
    },
    {.syscall_code = 221,
     .name = "fadvise64",
     .args_type = {"int", "loff_t", "size_t", "int"},
     .args_size = 4
    },
    {.syscall_code = 222,
     .name = "timer_create",
     .args_type = {"const clockid_t", "struct sigevent __user *", "timer_t __user *"},
     .args_size = 3
    },
    {.syscall_code = 223,
     .name = "timer_settime",
     .args_type = {"timer_t", "int", "const struct itimerspec __user *", "struct itimerspec __user *"},
     .args_size = 4
    },
    {.syscall_code = 224,
     .name = "timer_gettime",
     .args_type = {"timer_t", "struct itimerspec __user *"},
     .args_size = 2
    },
    {.syscall_code = 225,
     .name = "timer_getoverrun",
     .args_type = {"timer_t"},
     .args_size = 1
    },
    {.syscall_code = 226,
     .name = "timer_delete",
     .args_type = {"timer_t"},
     .args_size = 1
    },
    {.syscall_code = 227,
     .name = "clock_settime",
     .args_type = {"const clockid_t", "const struct timespec __user *"},
     .args_size = 2
    },
    {.syscall_code = 228,
     .name = "clock_gettime",
     .args_type = {"const clockid_t", "struct timespec __user *"},
     .args_size = 2
    },
    {.syscall_code = 229,
     .name = "clock_getres",
     .args_type = {"const clockid_t", "struct timespec __user *"},
     .args_size = 2
    },
    {.syscall_code = 230,
     .name = "clock_nanosleep",
     .args_type = {"const clockid_t", "int", "const struct timespec __user *", "struct timespec __user *"},
     .args_size = 4
    },
    {.syscall_code = 231,
     .name = "exit_group",
     .args_type = {"int"},
     .args_size = 1
    },
    {.syscall_code = 232,
     .name = "epoll_wait",
     .args_type = {"int", "struct epoll_event __user *", "int", "int"},
     .args_size = 4
    },
    {.syscall_code = 233,
     .name = "epoll_ctl",
     .args_type = {"int", "int", "int", "struct epoll_event __user *"},
     .args_size = 4
    },
    {.syscall_code = 234,
     .name = "tgkill",
     .args_type = {"pid_t", "pid_t", "int"},
     .args_size = 3
    },
    {.syscall_code = 235,
     .name = "utimes",
     .args_type = {"char __user *", "struct timeval __user *"},
     .args_size = 2
    },
    {.syscall_code = 236,
     .name = "vserver",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 237,
     .name = "mbind",
     .args_type = {"unsigned long", "unsigned long", "unsigned long", "unsigned long __user *", "unsigned long", "unsigned"},
     .args_size = 6
    },
    {.syscall_code = 238,
     .name = "set_mempolicy",
     .args_type = {"int", "unsigned long __user *", "unsigned long"},
     .args_size = 3
    },
    {.syscall_code = 239,
     .name = "get_mempolicy",
     .args_type = {"int __user *", "unsigned long __user *", "unsigned long", "unsigned long", "unsigned long"},
     .args_size = 5
    },
    {.syscall_code = 240,
     .name = "mq_open",
     .args_type = {"const char __user *", "int", "umode_t", "struct mq_attr __user *"},
     .args_size = 4
    },
    {.syscall_code = 241,
     .name = "mq_unlink",
     .args_type = {"const char __user *"},
     .args_size = 1
    },
    {.syscall_code = 242,
     .name = "mq_timedsend",
     .args_type = {"mqd_t", "const char __user *", "size_t", "unsigned int", "const struct timespec __user *"},
     .args_size = 5
    },
    {.syscall_code = 243,
     .name = "mq_timedreceive",
     .args_type = {"mqd_t", "char __user *", "size_t", "unsigned int __user *", "const struct timespec __user *"},
     .args_size = 5
    },
    {.syscall_code = 244,
     .name = "mq_notify",
     .args_type = {"mqd_t", "const struct sigevent __user *"},
     .args_size = 2
    },
    {.syscall_code = 245,
     .name = "mq_getsetattr",
     .args_type = {"mqd_t", "const struct mq_attr __user *", "struct mq_attr __user *"},
     .args_size = 3
    },
    {.syscall_code = 246,
     .name = "kexec_load",
     .args_type = {"unsigned long", "unsigned long", "struct kexec_segment __user *", "unsigned long"},
     .args_size = 4
    },
    {.syscall_code = 247,
     .name = "waitid",
     .args_type = {"int", "pid_t", "struct siginfo __user *", "int", "struct rusage __user *"},
     .args_size = 5
    },
    {.syscall_code = 248,
     .name = "add_key",
     .args_type = {"const char __user *", "const char __user *", "const void __user *", "size_t", "key_serial_t"},
     .args_size = 5
    },
    {.syscall_code = 249,
     .name = "request_key",
     .args_type = {"const char __user *", "const char __user *", "const char __user *", "key_serial_t"},
     .args_size = 4
    },
    {.syscall_code = 250,
     .name = "keyctl",
     .args_type = {"int", "unsigned long", "unsigned long", "unsigned long", "unsigned long"},
     .args_size = 5
    },
    {.syscall_code = 251,
     .name = "ioprio_set",
     .args_type = {"int", "int", "int"},
     .args_size = 3
    },
    {.syscall_code = 252,
     .name = "ioprio_get",
     .args_type = {"int", "int"},
     .args_size = 2
    },
    {.syscall_code = 253,
     .name = "inotify_init",
     .args_type = {},
     .args_size = 0
    },
    {.syscall_code = 254,
     .name = "inotify_add_watch",
     .args_type = {"int", "const char __user *", "u32"},
     .args_size = 3
    },
    {.syscall_code = 255,
     .name = "inotify_rm_watch",
     .args_type = {"int", "__s32"},
     .args_size = 2
    },
    {.syscall_code = 256,
     .name = "migrate_pages",
     .args_type = {"pid_t", "unsigned long", "const unsigned long __user *", "const unsigned long __user *"},
     .args_size = 4
    },
    {.syscall_code = 257,
     .name = "openat",
     .args_type = {"int", "const char __user *", "int", "umode_t"},
     .args_size = 4
    },
    {.syscall_code = 258,
     .name = "mkdirat",
     .args_type = {"int", "const char __user *", "umode_t"},
     .args_size = 3
    },
    {.syscall_code = 259,
     .name = "mknodat",
     .args_type = {"int", "const char __user *", "umode_t", "unsigned"},
     .args_size = 4
    },
    {.syscall_code = 260,
     .name = "fchownat",
     .args_type = {"int", "const char __user *", "uid_t", "gid_t", "int"},
     .args_size = 5
    },
    {.syscall_code = 261,
     .name = "futimesat",
     .args_type = {"int", "const char __user *", "struct timeval __user *"},
     .args_size = 3
    },
    {.syscall_code = 262,
     .name = "newfstatat",
     .args_type = {"int", "const char __user *", "struct stat __user *", "int"},
     .args_size = 4
    },
    {.syscall_code = 263,
     .name = "unlinkat",
     .args_type = {"int", "const char __user *", "int"},
     .args_size = 3
    },
    {.syscall_code = 264,
     .name = "renameat",
     .args_type = {"int", "const char __user *", "int", "const char __user *"},
     .args_size = 4
    },
    {.syscall_code = 265,
     .name = "linkat",
     .args_type = {"int", "const char __user *", "int", "const char __user *", "int"},
     .args_size = 5
    },
    {.syscall_code = 266,
     .name = "symlinkat",
     .args_type = {"const char __user *", "int", "const char __user *"},
     .args_size = 3
    },
    {.syscall_code = 267,
     .name = "readlinkat",
     .args_type = {"int", "const char __user *", "char __user *", "int"},
     .args_size = 4
    },
    {.syscall_code = 268,
     .name = "fchmodat",
     .args_type = {"int", "const char __user *", "umode_t"},
     .args_size = 3
    },
    {.syscall_code = 269,
     .name = "faccessat",
     .args_type = {"int", "const char __user *", "int"},
     .args_size = 3
    },
    {.syscall_code = 270,
     .name = "pselect6",
     .args_type = {"int", "fd_set __user *", "fd_set __user *", "fd_set __user *", "struct timespec __user *", "void __user *"},
     .args_size = 6
    },
    {.syscall_code = 271,
     .name = "ppoll",
     .args_type = {"struct pollfd __user *", "unsigned int", "struct timespec __user *", "const sigset_t __user *", "size_t"},
     .args_size = 5
    },
    {.syscall_code = 272,
     .name = "unshare",
     .args_type = {"unsigned long"},
     .args_size = 1
    },
    {.syscall_code = 273,
     .name = "set_robust_list",
     .args_type = {"struct robust_list_head __user *", "size_t"},
     .args_size = 2
    },
    {.syscall_code = 274,
     .name = "get_robust_list",
     .args_type = {"int", "struct robust_list_head __user * __user *", "size_t __user *"},
     .args_size = 3
    },
    {.syscall_code = 275,
     .name = "splice",
     .args_type = {"int", "loff_t __user *", "int", "loff_t __user *", "size_t", "unsigned int"},
     .args_size = 6
    },
    {.syscall_code = 276,
     .name = "tee",
     .args_type = {"int", "int", "size_t", "unsigned int"},
     .args_size = 4
    },
    {.syscall_code = 277,
     .name = "sync_file_range",
     .args_type = {"int", "loff_t", "loff_t", "unsigned int"},
     .args_size = 4
    },
    {.syscall_code = 278,
     .name = "vmsplice",
     .args_type = {"int", "const struct iovec __user *", "unsigned long", "unsigned int"},
     .args_size = 4
    },
    {.syscall_code = 279,
     .name = "move_pages",
     .args_type = {"pid_t", "unsigned long", "const void __user * __user *", "const int __user *", "int __user *", "int"},
     .args_size = 6
    },
    {.syscall_code = 280,
     .name = "utimensat",
     .args_type = {"int", "const char __user *", "struct timespec __user *", "int"},
     .args_size = 4
    },
    {.syscall_code = 281,
     .name = "epoll_pwait",
     .args_type = {"int", "struct epoll_event __user *", "int", "int", "const sigset_t __user *", "size_t"},
     .args_size = 6
    },
    {.syscall_code = 282,
     .name = "signalfd",
     .args_type = {"int", "sigset_t __user *", "size_t"},
     .args_size = 3
    },
    {.syscall_code = 283,
     .name = "timerfd_create",
     .args_type = {"int", "int"},
     .args_size = 2
    },
    {.syscall_code = 284,
     .name = "eventfd",
     .args_type = {"unsigned int"},
     .args_size = 1
    },
    {.syscall_code = 285,
     .name = "fallocate",
     .args_type = {"int", "int", "loff_t", "loff_t"},
     .args_size = 4
    },
    {.syscall_code = 286,
     .name = "timerfd_settime",
     .args_type = {"int", "int", "const struct itimerspec __user *", "struct itimerspec __user *"},
     .args_size = 4
    },
    {.syscall_code = 287,
     .name = "timerfd_gettime",
     .args_type = {"int", "struct itimerspec __user *"},
     .args_size = 2
    },
    {.syscall_code = 288,
     .name = "accept4",
     .args_type = {"int", "struct sockaddr __user *", "int __user *", "int"},
     .args_size = 4
    },
    {.syscall_code = 289,
     .name = "signalfd4",
     .args_type = {"int", "sigset_t __user *", "size_t", "int"},
     .args_size = 4
    },
    {.syscall_code = 290,
     .name = "eventfd2",
     .args_type = {"unsigned int", "int"},
     .args_size = 2
    },
    {.syscall_code = 291,
     .name = "epoll_create1",
     .args_type = {"int"},
     .args_size = 1
    },
    {.syscall_code = 292,
     .name = "dup3",
     .args_type = {"unsigned int", "unsigned int", "int"},
     .args_size = 3
    },
    {.syscall_code = 293,
     .name = "pipe2",
     .args_type = {"int __user *", "int"},
     .args_size = 2
    },
    {.syscall_code = 294,
     .name = "inotify_init1",
     .args_type = {"int"},
     .args_size = 1
    },
    {.syscall_code = 295,
     .name = "preadv",
     .args_type = {"unsigned long", "const struct iovec __user *", "unsigned long", "unsigned long", "unsigned long"},
     .args_size = 5
    },
    {.syscall_code = 296,
     .name = "pwritev",
     .args_type = {"unsigned long", "const struct iovec __user *", "unsigned long", "unsigned long", "unsigned long"},
     .args_size = 5
    },
    {.syscall_code = 297,
     .name = "rt_tgsigqueueinfo",
     .args_type = {"pid_t", "pid_t", "int", "siginfo_t __user *"},
     .args_size = 4
    },
    {.syscall_code = 298,
     .name = "perf_event_open",
     .args_type = {"struct perf_event_attr __user *", "pid_t", "int", "int", "unsigned long"},
     .args_size = 5
    },
    {.syscall_code = 299,
     .name = "recvmmsg",
     .args_type = {"int", "struct mmsghdr __user *", "unsigned int", "unsigned int", "struct timespec __user *"},
     .args_size = 5
    },
    {.syscall_code = 300,
     .name = "fanotify_init",
     .args_type = {"unsigned int", "unsigned int"},
     .args_size = 2
    },
    {.syscall_code = 301,
     .name = "fanotify_mark",
     .args_type = {"int", "unsigned int", "__u64", "int", "const char  __user *"},
     .args_size = 5
    },
    {.syscall_code = 302,
     .name = "prlimit64",
     .args_type = {"pid_t", "unsigned int", "const struct rlimit64 __user *", "struct rlimit64 __user *"},
     .args_size = 4
    },
    {.syscall_code = 303,
     .name = "name_to_handle_at",
     .args_type = {"int", "const char __user *", "struct file_handle __user *", "int __user *", "int"},
     .args_size = 5
    },
    {.syscall_code = 304,
     .name = "open_by_handle_at",
     .args_type = {"int", "struct file_handle __user *", "int"},
     .args_size = 3
    },
    {.syscall_code = 305,
     .name = "clock_adjtime",
     .args_type = {"const clockid_t", "struct timex __user *"},
     .args_size = 2
    },
    {.syscall_code = 306,
     .name = "syncfs",
     .args_type = {"int"},
     .args_size = 1
    },
    {.syscall_code = 307,
     .name = "sendmmsg",
     .args_type = {"int", "struct mmsghdr __user *", "unsigned int", "unsigned int"},
     .args_size = 4
    },
    {.syscall_code = 308,
     .name = "setns",
     .args_type = {"int", "int"},
     .args_size = 2
    },
    {.syscall_code = 309,
     .name = "getcpu",
     .args_type = {"unsigned __user *", "unsigned __user *", "struct getcpu_cache __user *"},
     .args_size = 3
    },
    {.syscall_code = 310,
     .name = "process_vm_readv",
     .args_type = {"pid_t", "const struct iovec __user *", "unsigned long", "const struct iovec __user *", "unsigned long", "unsigned long"},
     .args_size = 6
    },
    {.syscall_code = 311,
     .name = "process_vm_writev",
     .args_type = {"pid_t", "const struct iovec __user *", "unsigned long", "const struct iovec __user *", "unsigned long", "unsigned long"},
     .args_size = 6
    },
    {.syscall_code = 312,
     .name = "kcmp",
     .args_type = {"pid_t", "pid_t", "int", "unsigned long", "unsigned long"},
     .args_size = 5
    },
    {.syscall_code = 313,
     .name = "finit_module",
     .args_type = {"int", "const char __user *", "int"},
     .args_size = 3
    },
};

const strace_syscall_primary_info_t unknown = {
    .syscall_code = -1,
    .name  = "unknown",
    .args_type = {},
    .args_size = 0
};

strace_syscall_primary_info_t *get_syscall(int syscall_code)
{
    size_t i = 0;
    size_t len = 314;

    while (i < len) {
        if (syscalls_info[i].syscall_code == syscall_code) {
            return ((strace_syscall_primary_info_t *) &(syscalls_info[i]));
        }
        i++;
    }
    return ((strace_syscall_primary_info_t *) &unknown);
}