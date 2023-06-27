#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _putchar - Prints a single character to stdout
 * @c: The character to print
 *
 * Return: On success, returns the number of characters printed.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return putchar(c);
}

/**
 * print_string - Prints a string
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int print_string(char *str)
{
	int counter = 0;

	while (*str)
	{
		_putchar(*str);
		counter++;
		str++;
	}

	return counter;
}

/**
 * _printf - Custom printf function implementation
 * @format: Format string containing the text to be printed
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int counter = 0;

	va_start(arguments, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{
				int ch = va_arg(arguments, int);
				_putchar(ch);
				counter++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(arguments, char *);
				if (str != NULL)
					counter += print_string(str);
				else
					counter += print_string("(null)");
			}
			else if (*format == '%')
			{
				_putchar('%');
				counter++;
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				counter += 2;
			}
		}
		else
		{
			_putchar(*format);
			counter++;
		}

		format++;
	}

	va_end(arguments);

	return counter;
}


	va_end(arguments);
	return (counter);
}
