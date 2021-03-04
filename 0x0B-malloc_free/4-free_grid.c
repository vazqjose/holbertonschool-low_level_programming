#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid
 * @grid: input grid
 * @height: height of grid
 * Return: None
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <  height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
