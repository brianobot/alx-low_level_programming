#include "main.h"

/**
 * _isalpha - main entry point
 * description: checks if an obj is a letter
 * @c: function parameter
 *
 * Return: integer
 */

int _isalpha(int c)
{
	int lower = 65;
	int upper = 122;

	if (c >= lower && c <= upper)
		return (1);

	return (0);
}
