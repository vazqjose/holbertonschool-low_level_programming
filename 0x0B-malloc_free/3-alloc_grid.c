#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width of grid
 * @height: height of grid
 * Return: Null on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **myGrid;

	if (width <= 0 || height <= 0)
	return (0);

	myGrid = (int **)malloc(sizeof(int *) * height);

	if (myGrid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		myGrid[i] = malloc(sizeof(int) * width);

		if (myGrid[i] == NULL)
			for (j = 0; j <  height; j++)
			{
				free(myGrid[j]);
			}
			free(myGrid);
			return (0);
	}
		for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			myGrid[i][j] = 0;

	return (myGrid);
}
