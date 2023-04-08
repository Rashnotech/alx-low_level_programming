#include "main.h"
/**
 * get_bit - get the bit from a specific index
 * @n: number to check index from
 * @index: specific index to find
 *
 * Return: an index otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shift_num, bit_val;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	shift_num = n >> index;
	bit_val = shift_num & 1;
	return (bit_val);
}
