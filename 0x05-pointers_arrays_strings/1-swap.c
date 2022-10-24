#include <stdio.h>

/**
 * swap_int - takes two integers and swap thier values
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
