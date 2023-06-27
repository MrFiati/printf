#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct print_function - Holds format specifier
 * @specifier: The conversion specifier
 * @function: Pointer to the function that handles the conversion specifier
 */
typedef struct print_function
{
char specifier;
int (*function)(va_list);
} print_function_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_characters(va_list arguments);
int print_strings(va_list arguments);
int print_percent(va_list arguments);
int print_decimal(va_list arguments);
int _function(char specifier, va_list arguments);

#endif /* MAIN_H */
