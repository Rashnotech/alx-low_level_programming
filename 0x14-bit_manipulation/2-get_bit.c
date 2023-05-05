#include "main.h"
/**
 * get_bit - get bit at an position
 * @n: number specified
 * @index: index specified
 *
 * Return: an integer value 1, 0 onerror -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n = n >> index;
	if (n & 1)
		return (1);
	else
		return(0);

}
