#include "main.h"

/**
 * _function - Selects the appropriate function based on the specifier.
 *
 * @specifier: The conversion specifier.
 * @args: The argument list.
 *
 * Return: The count of characters printed.
 */
int _function(char specifier, va_list arguments)
{
    print_function_t functions[] = {{'c', print_characters},{'s', print_strings},{'%', print_percent},{'d', print_decimal},{'i', print_decimal},{0, NULL}};

    for (int i = 0; functions[i].specifier; i++)
    {
        if (specifier == functions[i].specifier)
            return functions[i].function(args);
    }

    _putchar('%');
    _putchar(specifier);
    return 2;
}
