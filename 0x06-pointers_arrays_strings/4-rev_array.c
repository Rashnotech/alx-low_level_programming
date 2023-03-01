#include "main.h"
/**
 * reverse_array - reverse an integer
 * @a: an array of integer
 * n: number of element to be swap
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	temp = 0;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
