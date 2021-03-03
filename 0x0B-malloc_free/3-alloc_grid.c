#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * width);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * height);

		if (grid[i] == NULL)
			return (NULL);

		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
