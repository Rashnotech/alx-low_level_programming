#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range - an array range from min to max
 * @min: minimun integer to start
 * @max: maximum integer to end loop
 *
 * Return: an array of integers otherwise NULL
 */
int *array_range(int min, int max)
{
	int *range, i;

	if (min > max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min + 1));
	if (range == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		range[i] = min + i;
	return (range);
}
