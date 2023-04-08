#include "main.h"
/**
 * flip_bits - a function that would need to flip to get from one number
 * to another
 * @n: number to be flipped
 * @m: second number
 *
 * Return: an unsigned integer number bits from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, counter = 0;

	result = n ^ m;
	while (result)
	{
		result &= (result - 1);
		counter += 1;
	}
	return (counter);
}
