#include "main.h"
/**
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (!n)
		return (-1);
	bit = 1 << index;
	*n |= bit;
	return (1);
}
