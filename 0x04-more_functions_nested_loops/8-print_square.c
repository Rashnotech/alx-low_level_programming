#include "main.h"
/**
 * print_square - print square shape
 * @size: an operand with size value
 *
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
