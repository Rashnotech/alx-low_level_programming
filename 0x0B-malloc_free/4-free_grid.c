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
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
