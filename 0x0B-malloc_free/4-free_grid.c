#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 *		created by your alloc_grid function
 * @grid: address for the 2 dim grid
 * @height: height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)

	{
		free(grid[a]);
	}

	free(grid);
}
