#include "main.h"
/**
 * flip_bits - flip bits from one number to another
 * @n: starting point
 * @m: destination
 *
 * Return: an integer value otherwise 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int index;

	index = 0;
	while (x)
	{
		index += (x & 1);
		x >>= 1;
	}
	return (index);
}
