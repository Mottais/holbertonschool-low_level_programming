#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid.
 * @grid: array to free
 * @height: height grid
 *
 */

void free_grid(int **grid, int height)
{
	int lg;

	if (grid == NULL)
		return;


	for (lg = 0; lg < height; lg++)
		if (grid[lg] != NULL)
		free(grid[lg]);
	free(grid);
}
