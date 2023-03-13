#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	unsigned int i;

	if (size != 0)
	{
		ptr_ch = malloc(size * sizeof(char));
		if (ptr_ch == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			ptr_ch[i] = c;
	}
	else
	{
		return (NULL);
	}
	return (ptr_ch);
}
