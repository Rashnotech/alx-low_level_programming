#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * int_index - an index of compared array
 * @array: an array pointer
 * @size: size of the array
 * @cmp: an array to be compare with
 *
 * Return: an integer value otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}

