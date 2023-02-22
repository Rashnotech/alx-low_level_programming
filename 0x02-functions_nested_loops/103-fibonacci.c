#include <stdio.h>
/**
 * main - print a fibonacci
 *
 * Return: an integer value of 0 or 1 otherwise
 */
int main(void)
{
	long i, j, k, sum;

	i = 0, j = 1, k = 2, sum = k;
	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
			sum += k;
		j = k - j;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
