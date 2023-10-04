#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a 2d grid
 * @grid: the grid to be freed
 * @height: the height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i ++)
		free(grif[i]);

	free(grid);
}
