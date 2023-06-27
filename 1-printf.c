#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_char - Prints a single character
 * @ch: The character to print
 *
 * Return: Number of characters printed (always 1)
 */
int print_char(char ch)
{
	putchar(ch);
	return (1);
}

/**
 * print_string - Prints a string
 * @str: The string to print
 *
 * Return: Number of characters printed
 */
int print_string(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		putchar(*str);
		counter++;
		str++;
	}
	return (counter);
}

/**
 * _printf - Custom printf function implementation
 * @format: Format string containing the text to be printed
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	const char *ptr = format;
	int counter = 0;
	va_list arguments;

	va_start(arguments, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == 'c')
			{
				int ch = va_arg(arguments, int);
				counter += print_char(ch);
			}
			else if (*ptr == 's')
			{
				char *str = va_arg(arguments, char *);
				counter += print_string(str);
			}
			else if (*ptr == '%')
			{
				counter += print_char('%');
			}
			else
			{
				counter += print_char('%');
				counter += print_char(*ptr);
			}

		}
		else
		{
			counter += print_char(*ptr);
		}
	}

	va_end(arguments);
	return (counter);
}
