#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Write a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: variable
 * @height: variable
 */
void free_grid(int **grid, int height)
{
	int s;

	for (s = 0; s < height; s++)
	{
		free(grid[s]);
	}
	free(grid);
}
