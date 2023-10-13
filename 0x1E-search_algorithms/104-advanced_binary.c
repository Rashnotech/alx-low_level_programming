#include "search_algos.h"
/**
 * advanced_binary - a function that searches for value
 * @array: a pointer to the first element of the array
 * @size: the number of elements
 * @value: the value to search
 * Return: searched value otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}

/**
 * binary_recursive - a function that searches for value
 * @array: a pointer to the first element
 * @left: Integer
 * @right: Integer
 * @value: the search value
 * Return: search value otherwise -1
 */
int binary_recursive(int *array, int left, int right, int value)
{
	int mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);
	mid = left + (right - left) / 2;
	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);
	if (value > array[mid])
		return (binary_recursive(array, mid + 1, right, value));
	return (binary_recursive(array, left, mid, value));
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
	for (; index <= size; index++)
	{
		printf("%d", array[index]);
		if (index < size)
			printf(", ");
	}
	putchar(10);
}
