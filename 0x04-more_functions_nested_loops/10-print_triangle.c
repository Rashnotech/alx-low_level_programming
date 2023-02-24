#include "main.h"
/**
 * print_triangle - print a diagonal line
 * @size: an operand for size
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = size, k = 1;
			while (j > i)
			{
				_putchar(' ');
				j--;
			}
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
		return;
	}
}
