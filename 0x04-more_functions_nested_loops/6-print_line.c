#include "main.h"
/**
 * print_line - print a line of any size
 * @n: an operand for size
 *
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar(10);
}
