#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the 2 dimensional grid previously created
 * @grid: grid of memories
 * @height: int
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
