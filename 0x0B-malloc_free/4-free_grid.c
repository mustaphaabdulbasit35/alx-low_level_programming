#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: grid 2d
 * @height: height dimension of grid
 * Description: free memory of greed
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid);
}
