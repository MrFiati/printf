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
 * _printf - this is printf function that we are creating
 * @format: Format string containing the text to be printed
 * @...: Variable arguments to be printed according to the format
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int p, counter = 0;

	va_start(arguments, format);

	if (format == NULL)
		return (-1);

	for (p = 0; format[p] != '\0'; i++)
	{
		if (format[p] != '%')
		{
			_putchar(format[i]);
			counter++;
		}
		else
		{
			if (format[p + 1] == '\0')
				return (-1);

			counter = counter + _function(format[p + 1], arguments);
			i++;
		}
	}

	va_end(arguments);
	return (counter);
}
