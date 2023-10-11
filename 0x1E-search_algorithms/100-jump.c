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

	if (!array)
		return (-1);

	step = sqrt(size);
	prev = 0;
	for (i = 0; i < size - 1; i += step)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] >= value)
			break;
		prev = i;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
	for (i = prev; i <= (prev + step) && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
