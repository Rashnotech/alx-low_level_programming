#include "main.h"
/**
 * clear_bit - clear bit at specified index
 * @n: number from which bit is cleared
 * @index: index specified if exist
 *
 * Return: an integer value of 1, onerror -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

