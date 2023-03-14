#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - multi-dimensional array of n by x size
 * @width: row of the array
 * @height: column of the array
 *
 * Return: an array of 0 otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr_int, i, j;

	if (width <= 0 && height <= 0)
		return (NULL);
	ptr_int = malloc(height * sizeof(int *));
	if (ptr_int == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr_int[i] = malloc(sizeof(int) * width);
		if (ptr_int[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr_int[j]);
			free(ptr_int);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr_int[i][j] = 0;
	}
	return (ptr_int);
}
