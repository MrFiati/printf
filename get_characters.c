#include <unistd.h>
#include "main.h"

/**
 * print_characters - this function prints one char
 * @arguments: Variable arguments list
 *
 * Return: it return awlays 1
 */
int print_characters(va_list arguments)
{
	int ch = va_arg(arguments, int);

	_putchar(ch);

	return (1);
}
