#include "main.h"
/**
 * print_number - print any number
 * @n: an operand for digit
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(n % 10 + '0');
}
