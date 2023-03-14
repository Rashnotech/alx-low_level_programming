#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - freeing a 2 dimensional grid
 * @grid: a 2D array
 * @height: array height
 */
void free_grid(int **grid, int height)
{
	int i, j;

	if (grid == NULL || height == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
			free(grid[j]);
		free(grid[i]);
	}
	free(grid);
}
