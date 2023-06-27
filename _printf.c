#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_char - this function is used to print a charchter
 * @ch: The character that we gonna print
 *
 * Return: Number of characters we printed
 */

int print_char(char ch)
{
	_putchar(ch);
	return (1);
}

/**
 * print_string - this function is used to print a string
 * @str: The string that we gonna print
 *
 * Return: Number of characters we printed
 */

int print_string(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		counter++;
		str++;
	}
	return (counter);
}

/**
=======
 * _printf - Custom printf function implementation
 * @format: Format string containing the text to be printed
 * @...: Variable arguments to be printed according to the format
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int i, counter = 0;

	va_start(arguments, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
		}
		else
		{
			if (format[i + 1] == '\0')
				return (-1);

			counter = counter + _function(format[i + 1], arguments);
			i++;
		}
	}

	va_end(arguments);
	return (counter);
}
