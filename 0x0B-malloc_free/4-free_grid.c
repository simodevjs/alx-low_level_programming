#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory of a 2D grid.
 * @grid: The 2D array to be freed.
 * @height: The height of the 2D array.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
