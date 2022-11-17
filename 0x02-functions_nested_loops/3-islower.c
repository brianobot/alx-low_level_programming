#include "main.h"

/**
 * _islower - main entry point
 *
 * Return: integer 1 or 0
 */

int _islower(int c)
{
	int result = 1;
	int i;

	for (i = 65; i < 65 + 25; ++i)
	{
		if (c == i)
			return (0);
	}

	return (result);
}
