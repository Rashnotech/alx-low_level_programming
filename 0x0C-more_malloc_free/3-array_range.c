#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range - an array 
 */
int *array_range(int min, int max)
{
	int *range, i;

	if (min > max)
		return (NULL);
	range = malloc(sizeof(int) * (max + 1));
	if (range == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		range[i] = i;
	return (range);
}
