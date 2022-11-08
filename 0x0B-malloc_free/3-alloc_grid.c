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
	int hgt_index, wid_index;
	int **twoD;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
	{
		free(twoD);
		return (NULL);
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twoD[hgt_index] = malloc(sizeof(int) * width);

		if (twoD[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twoD[hgt_index]);

			free(twoD);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			twoD[hgt_index][wid_index] = 0;
	}

	return (twoD);
}
