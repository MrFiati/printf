#include "main.h"
#include <unistd.h>
/**
 * print_percent - Prints a percent character
 * @arguments: Variable argument list
 *
 * Return: Number of characters printed (always 1)
 */
int print_percent(va_list arguments)
{
(void)arguments;
_putchar('%');
return (1);
}
