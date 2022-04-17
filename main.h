#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define UNUSED(x) (void)(x)

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_op_func(const char *s))(va_list);
int _printc(va_list c);
int _printp(__attribute__((unused))va_list c);
int _prints(va_list s);
int _printd(va_list d);
int _printi(va_list i);
/**
 * struct format - Struct to define type of data and its function.
 * @type: formats
 * @f: The function associated
 * Description: structure functions
 */
typedef struct format
{
char *type;
int (*f)(va_list);
} listype;

#endif
