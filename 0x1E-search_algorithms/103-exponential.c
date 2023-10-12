#include "search_algos.h"
/**
 * exponential_search - a function that search for a value
 * @array: a pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: an integer value searched otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bnd = 1, prev;

	if (!array || size == 0)
		return (-1);
	if (array[0] != value)
	{
		while (bnd < size && array[bnd] < value)
		{
			printf("Value check array[%lu] = [%d]\n"
					bnd, array[bnd]);
			prev = bnd;
			bnd *= 2;
		}
	}
	bnd = bnd < size ? bnd : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", prev, bnd);
	return (binary_search(array, bnd, value));
}

/**
 * binary_search - a function that searches for a value
 * @array: a pointer to the first element of the array
 * @size: size of the array
 * @value: the number to be search for
 * Return: an integer value searched otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right = size, mid;

	if (!array)
		return (-1);
	left = size % 2 == 0 ? size / 2 : size / 2 + 1;
	while (left <= right)
	{
		print_array(array, left, right + 1);
		mid = left + (right - left) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}


/**
 * print_array - print element in an array
 * @array: a pointer the first number
 * @index: start point to print
 * @size: end point to print
 */
void print_array(int *array, size_t index, size_t size)
{
	printf("Searching in array: ");
	for (; index < size; index++)
	{
		printf("%d", array[index]);
		if (index < size - 1)
			printf(", ");
	}
	putchar(10);
}
