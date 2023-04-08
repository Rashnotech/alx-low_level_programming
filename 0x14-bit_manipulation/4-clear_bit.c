#include "main.h"
/**
 * clear_bit - a function that set the value of a bit to 0 at a given index
 * @index: specified index or position
 * @n: number to set bit to 0
 *
 * Return: an integer value of 1 otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit = ~(1 << index);
	*n &= bit;
	return (1);
}
