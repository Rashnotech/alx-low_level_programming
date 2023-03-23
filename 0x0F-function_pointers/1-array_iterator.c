#include "function_pointers.h"
#include <stdio.h>
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

	if (array == NULL)
		return;
	for(i = 0; i < size; i++)
		action(array[i]);
	
}
