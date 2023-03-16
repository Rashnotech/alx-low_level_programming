#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range - an array 
 */
int *array_range(int min, int max)
{
	int *range;

	if (min > max)
		return (NULL);
	range = mallac(sizeof(int) * (min + max));
	if (range == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		range[i] = i;
	return (range);
}