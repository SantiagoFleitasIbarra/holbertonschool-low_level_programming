# include "main.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid previously created by
 * your alloc_grid function.
 * @grid: grid to check
 * @height: height
*/
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
	{
		return;
	}

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
