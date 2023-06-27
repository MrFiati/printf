#include "main.h"
#include <unistd.h>
/**
 * print_percent - this function print percent
 * @arguments: Variable arguments list
 *
 * Return: it always print 1
 */
int print_percent(va_list arguments)
{
(void)arguments;
_putchar('%');
return (1);
}
