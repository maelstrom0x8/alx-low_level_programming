#include <stdlib.h>
#include "main.h"


/**
 * free_grid - Frees a multidimensional array
 * Description:  A function that frees a two
 * dimensional grid previously created by alloc_grid
 * @grid: Two dimensional grid
 * @height: Height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
