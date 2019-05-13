/*
** EPITECH PROJECT, 2019
** PSU_strace_2018
** File description:
** cmod
*/

#ifndef CMOD_H_
#define CMOD_H_

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

typedef struct __attribute__((packed)) class_structure
{
    void (*ctor)(struct class_structure *object, va_list *args);
    void (*dtor)(struct class_structure *object);
    size_t size;
}class_t;

class_t *__new__(class_t *std, ...);
void __delete__(class_t *std);

#define display(self) (self->display(self))

#endif /* !CMOD_H_ */
