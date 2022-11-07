#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  free a two dimensional array
 * @grid: the grid we will free up
 * @height: the number of rows
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
