#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* Struct to hold format and variable arguments */
typedef struct printf_data
{
    const char *format;
    va_list args;
    int count;
} printf_data;

/* Function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_digit(va_list args);

#endif /* MAIN_H */
