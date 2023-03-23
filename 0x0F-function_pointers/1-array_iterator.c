#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - an array iterator
 * @array: a pointer to an array
 * @size: the size of an element
 * @action: pointer function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (array == NULL)
		return;
	while(size !=0 && array != '\0')
	{
		action(array[i]);
		i++;
	}
}
