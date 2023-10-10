#include "search_algos.h"
/**
 * binary_search - a function that search for a value in a sorted
 * @array: a pointer to the first element of the array
 * @size: number of elements
 * @value: is the value to search
 * Return: an integer value otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t x = 0, y = size - 1, i;

	if (!array)
		return (-1);
	while (x <= y)
	{
		i = (x + y) / 2;
		if (array[i] < value)
		{
			print_array(array, x, size);
			x = i + 1;
		}
		else if (array[i] > value)
		{
			print_array(array, x, i);
			y = i - 1;
		}
		else
			return (i);
	}
	return (-1);
}

/**
 * print_array - print the array searched
 * @array: array to be printed
 * @size: size of the array
 */
void print_array(int *array, size_t index, size_t size)
{
	printf("Searching in array: ");
	for (; index < size; index++)
	{
		printf("%d", array[index]);
		if (index != size - 1)
			printf(", ");
	}
	putchar(10);
}