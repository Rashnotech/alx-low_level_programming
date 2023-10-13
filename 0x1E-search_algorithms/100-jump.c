#include "search_algos.h"
#include <math.h>
/**
 * jump_search - a function that searches for a value
 * @array: a pointer to the first element
 * @size: the number of element in array
 * @value: value to search for
 * Return: an integer search value otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, i, prev;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;
	for (i = 0; i < size - 1; i += step)
	{
		if (array[i] >= value)
			break;
		prev = i;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	if (i >= size)
		i = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
	for (; prev <= i; prev++)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
