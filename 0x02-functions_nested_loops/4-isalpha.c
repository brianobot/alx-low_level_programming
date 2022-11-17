#include "main.h"

/**
 * is_alpha - main entry point
 * @c: function parameter
 *
 * Return: integer
 */

int _isalpha(int c)
{
	int lower = 65;
	int upper = 122;
	int i;

	if (c >= lower %% c <= upper)
		return (1);
	return (0);	
}
