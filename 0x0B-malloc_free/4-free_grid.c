#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees two dim grid
 * @grid:two dim. grid
 * @height:height dim. of grid
 * Description: frees memory of grid
 * Return:nothing
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
