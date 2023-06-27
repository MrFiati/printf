#include <unistd.h>
#include "main.h"
/**
 * print_characters - Prints a single character
 * @args: Variable argument list
 *
 * Return: Number of characters printed (always 1)
 */
int print_characters(va_list args)
{
	int ch = va_arg(args, int);

	_putchar(ch);

	return (1);
}
