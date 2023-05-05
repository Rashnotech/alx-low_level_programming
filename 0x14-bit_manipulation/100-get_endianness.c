#include "main.h"
/**
 * get_endianness - check for endianness
 *
 * Return: an integer 0 for little endian and 1 for big
 */
int get_endianness(void)
{
	unsigned int index = 1;
	char *endian;

	endian = (char *)&index;
	if (*endian)
		return (1);
	else
		return (0);
}
