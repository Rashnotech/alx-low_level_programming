#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array
 * @array: a pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for in the function
 * Return: an integer value search otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
