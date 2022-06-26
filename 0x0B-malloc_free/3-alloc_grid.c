#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2dimensional
 * array of integers
 * @width: int
 * @height: int
 * Return: 2dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **grid, k, l;

	grid = malloc(sizeof(*grid) * height);
	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < height; k++)
		{
			grid[k] = malloc(sizeof(**grid) * width);
			if (grid[k] == 0)
			{
				/* free memory if malloc fails*/
				while (k--)
					free(grid[k]);
				free(grid);
				return (NULL);
			}
			for (l = 0; l < width; l++)
				grid[k][l] = 0;
		}
	}
	return (grid);
}
