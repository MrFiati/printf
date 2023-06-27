#include <unistd.h>
#include "main.h"
/**
 * print_decimal - this funcrion prints a decimal digit
 * @arguments: Variable arguments list
 *
 * Return: Number of characters we printed
 */
int print_decimal(va_list arguments)
{
	int number = va_arg(arguments, int);
	int counter = 0;
	int digits = 0;
	int divisor = 1;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	if (number < 0)
	{
		_putchar('-');
		counter++;
		number = -number;
	}

	while (number / divisor > 9)
		divisor = divisor * 10;

	while (divisor != 0)
	{
		digits = number / divisor;
		_putchar('0' + digits);
		counter++;
		number %= divisor;
		divisor = divisor / 10;
	}

	return (counter);
}
