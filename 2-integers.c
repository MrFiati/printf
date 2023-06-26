#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_number - Prints an integer
 * @n: The integer to print
 *
 * Return: Number of digits printed
 */
int print_number(int n)
{
int digits = 0;
if (n < 0)
{
_putchar('-');
digits++;
n = -n;
}
if (n / 10)
digits = digits + print_number(n / 10);
_putchar((n % 10) + '0');
digits++;
return (digits);
}
/**
 * _printf - Custom printf function implementation
 * @format: Format string containing the text to be printed
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
int len = strlen(format);
va_list arguments;
va_start(arguments, format);
int counter = 0;
for (const char *ptr = format; *ptr != '\0'; ptr++)
{
if (*ptr == '%')
{
ptr++;
if (*ptr == 'd' || *ptr == 'i')
{
int num = va_arg(arguments, int);
counter += print_number(num);
}
else
{
_putchar(*ptr);
counter++;
}
}
else
{
_putchar(*ptr);
counter++;
}
}
va_end(arguments);
return (counter);
}
