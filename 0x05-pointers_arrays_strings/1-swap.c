#include <stdio.h>

/**
 * swap - takes two integers and swap thier values
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	b* = tmp;
}
