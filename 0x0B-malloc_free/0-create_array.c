#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * create_array - a function that create an array
 * @size: an unsigned size of the array
 * @c: an operand for character
 *
 * Return: an address to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr_ch;

	if (size != 0)
	{
		ptr_ch = malloc(size * strlen(c));
	}
	else
	{
		return (NULL);
	}
	return (ptr_ch);
}
