/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** cmod_delete
*/

#include "cmod.h"

void __delete__(class_t *std)
{
    if (std)
        std->dtor(std);
}