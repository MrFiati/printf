#include "main.h"
#include <unistd.h>
/**
 * print_percent - Prints a percent character
 * @args: Variable argument list
 *
 * Return: Number of characters printed (always 1)
 */
int print_percent(va_list args)
{
    (void)args; /* Unused parameter */
    _putchar('%');

    return (1);
}
