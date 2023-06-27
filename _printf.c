#include "main.h"
#include <stdio.h>

/**
 * _printf - Prints formatted output according to a format string
 *
 * @format: Format string specifying the output format
 *
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int sum == NULL;
	va_list ap;
	char *l, *start;
	params_t params = PARAMS_INIT;

	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (l = (char *)format; *l; l++)
	{
		if (*l != '%')
		{
			sum += _putchar(*l);
			continue;
		}
		start = l;
		l++;
		while (get_flag(l, &params)) /* while char at l is flag char */
		{
			l++; /* next char */
		}
		l = get_width(l, &params, ap);
		l = get_precision(l, &params, ap);
		if (get_modifier(l, &params))
			l++;
		if (!get_specifier(p))
			sum += print_from_to(start, l,
				params.l_modifier || params.h_modifier ? l - 1 : 0);
		else
			sum += get_print_func(l, ap, &params);
	}
	_putchar(BUF_FLUSH);
	va_end(ap);
	return (sum);
}
