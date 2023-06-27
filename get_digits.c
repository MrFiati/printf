#include <unistd.h>
#include "main.h"
/**
 * print_decimal - this funcrion prints a decimal digit
 * @arguments: Variable arguments list
 *
 * Return: Number of characters printed
 */
int print_decimal(va_list arguments)
{
	int num = va_arg(arguments, int);
	int counter = 0;
	int digits = 0;
	int divisor = 1;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		counter++;
		num = -num;
	}

	while (num / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		digits = num / divisor;
		_putchar('0' + digits);
		counter++;
		num %= divisor;
		divisor /= 10;
	}

	return (counter);
}
