#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom printf function implementation
 * @format: Format string containing the text to be printed
 * @...: Variable arguments to be printed according to the format
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			if (format[i + 1] == '\0')
				return (-1);

			count += _function(format[i + 1], args);
			i++;
		}
	}

	va_end(args);
	return (count);
}
