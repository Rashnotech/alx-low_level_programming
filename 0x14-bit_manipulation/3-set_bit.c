#include "main.h"
/**
 * set_bit - set bit an any index specified
 * @n: number to set bit
 * @index: index of number to set
 *
 * Return: an integer value 1 if it work and -1 onerror
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n = n | (1 << index);
	return (1);
}
