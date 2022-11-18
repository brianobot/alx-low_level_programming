#include "function_pointers.h"

/**
 * array_iterator - perform an action on a whole array
 * @array: array to act on
 * @size: size of array
 * @action: function to execute on array
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
