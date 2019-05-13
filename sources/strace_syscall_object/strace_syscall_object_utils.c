/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** strace_syscall_object_utils
*/

#include "strace.h"

void strace_setargs_switch(strace_syscall_object_t *self, strace_info_t *info, size_t i)
{
    switch (i) {
        case 0 :
            self->_args[i] = info->_regs.rdi;
            break;
        case 1 :
            self->_args[i] = info->_regs.rsi;
            break;
        case 2 :
            self->_args[i] = info->_regs.rdx;
            break;
        case 3 :
            self->_args[i] = info->_regs.r10;
            break;
        case 4 :
            self->_args[i] = info->_regs.r8;
            break;
        case 5 :
            self->_args[i] = info->_regs.r9;
            break;
        default :
            self->_args[i] = 0;
            break;
    }
}