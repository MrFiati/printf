#include "main.h"
#include <stddef.h>

/**
 * _function - this function select the matching function to specifier
 *
 * @specifier: The specifier that converse.
 * @arguments: The argument list.
 *
 * Return: The count of characters printed.
 */
int _function(char specifier, va_list arguments)
{
print_function_t functions[] = {{'c', print_characters},
{'s', print_strings},
{'%', print_percent},
{'d', print_decimal},
{'i', print_decimal},
{0, NULL}};
int f;
for (i = 0; functions[f].specifier; i++)
{
if (specifier == functions[f].specifier)
return (functions[i].function(arguments));
}
_putchar('%');
_putchar(specifier);
return (2);
}
