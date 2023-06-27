#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * print_strings - print string.
 *
 * @arguments: argument.
 *
 * Return: character count.
 */
int print_strings(va_list arguments)
{
	char *str = va_arg(arguments, char *);
	int counter = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		counter++;
	}

	return (counter);
}
