#include <stdio.h>

/**
 * int_index - checks an array for an integer that matches
 * @array: array to search
 * @size: size of array
 * @cmp: comparison function to check with
 *
 * Return: index of the match or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
