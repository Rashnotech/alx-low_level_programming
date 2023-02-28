#include "main.h"
#include <stdio.h>
/**
 * print_array - print an integer value
 * @a: an operand with integer data type
 * @n: an operand for size of an array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n)
			break;
		printf("%d", a[i]);
		printf(", ");
	}
	_putchar(10);
}
