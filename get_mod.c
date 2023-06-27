#include "main.h"
#include <unistd.h>
/**
 * print_percent - this function print percent
 * @arguments: variable arguments list
 * Return: it always prints 1
 */
int print_percent(va_list arguments)
{
(void)arguments;
_putchar('%');
return (1);
}
