#include "main.h"
/**
 * set_bit - set bit to 1 at specifed index
 * @n: number to set
 * @index: position specifer/ index
 *
 * Return: an integer value otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	bit = 1 << index;
	*n |= bit;
	return (1);
}
