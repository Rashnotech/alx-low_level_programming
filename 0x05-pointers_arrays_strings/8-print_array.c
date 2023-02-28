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

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
