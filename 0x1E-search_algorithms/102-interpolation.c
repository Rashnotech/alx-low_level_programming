#include "search_algos.h"
/**
 * interpolation_search - a function that search for value
 * @array: a pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: an integer value searched otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array || size == 0)
		return (-1);
	while (array[high] != array[low])
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) *
				(value - array[low]));
		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos,
					array[pos]);
		else
		{
			 printf("Value checked array[%ld] is out of range\n", pos);
			 break;
		}
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	if (value == array[low])
		return (low);
	return (-1);
}
