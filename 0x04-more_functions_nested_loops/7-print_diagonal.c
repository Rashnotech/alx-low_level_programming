#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: an operand for size
 *
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <=n; i++)
	{
		j = 0;
		while (j <= i)
		{
			_putchar(' ');
			j++;
		}
		_putchar(92);
		_putchar(10);
		if (i != n)
			continue;
	}
}
