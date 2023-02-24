#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: an operand for size
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			j = 0;
			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			if (i != n)
			{
				continue;
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
