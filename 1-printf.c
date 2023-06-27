#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_char - Prints a single character
 * @data: The printf_data struct containing the format and arguments
 *
 * Return: Always 0 (for consistency with other printf handlers)
 */
int print_char(printf_data *data)
{
int ch = va_arg(data->args, int);
putchar(ch);
data->count++;
return (0);
}
/**
 * print_string - Prints a string
 * @data: The printf_data struct containing the format and arguments
 *
 * Return: Number of characters printed
 */
int print_string(printf_data *data)
{
char *str = va_arg(data->args, char *);
int len = 0;
while (*str != '\0')
{
_putchar(*str++);
len++;
}
data->count += len;
return (len);
}
/**
 * _printf - Custom printf function implementation
 * @format: Format string containing the text to be printed
 * @...: Variable arguments to be printed according to the format
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
printf_data data;
data.format = format;
va_start(data.args, format);
data.count = 0;
while (*data.format != '\0')
{
if (*data.format == '%')
{
data.format++;
if (*data.format == 'c')
{
print_char(&data);
}
else if (*data.format == 's')
{
print_string(&data);
}
else if (*data.format == '%')
{
_putchar('%');
data.count++;
}
}
else
{
_putchar(*data.format);
data.count++;
}
data.format++;
}
va_end(data.args);
return (data.count);
}
