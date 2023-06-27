#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
typedef struct printf_data
{
const char *format;
va_list args;
int count;
} printf_data;

int print_char(printf_data *data);
int print_string(printf_data *data);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
