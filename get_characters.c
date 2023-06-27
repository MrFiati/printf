#include <unistd.h>
#include "main.h"
/**
 * print_characters - Prints a single character
 * @arguments: Variable argument list
 *
 * Return: Number of characters printed (always 1)
 */
int print_characters(va_list arguments)
{
	int ch = va_arg(arguments, int);

	_putchar(ch);

	return (1);
}
