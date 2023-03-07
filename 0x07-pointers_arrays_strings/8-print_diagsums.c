#include"main.h"
/**
 * print_diagsums - progam that print two diagonal matrix
 * @a: a matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0; sum2 = 0;
	for (i = 0; i < size ; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - 1 - i);
		printf("%d,%d\n", sum1, sum2);
	}
}
