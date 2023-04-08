#include "main.h"
/**
 * get_endianness - a function that check endiannes
 *
 * Return: an integer number 0 for big and 1 for little
 */
int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *byte = (unsigned char *) &value;
	
	if (*byte)
		return (1);
	else
		return (0);
}
