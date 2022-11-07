#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creaet a 2 dimentional array of integers
 * @width: rows of the 2D array
 * @height: columns of the 2D array
 *
 * Return: a pointer or Null
 */
int **alloc_grid(int width, int height)
{
	int i, j, f, **alloc_mem;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc_mem = malloc(sizeof(int *) * height);

	if (alloc_mem == NULL)
	{
		free(alloc_mem);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		alloc_mem = malloc(sizeof(int) * width);

		if (alloc_mem[i] == NULL)
		{
			for (f = 1; f >= 0; f--)
				free(alloc_mem[f]);

			free(alloc_mem);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			alloc_mem[i][j] = 0;
	}

	return (alloc_mem);
}
