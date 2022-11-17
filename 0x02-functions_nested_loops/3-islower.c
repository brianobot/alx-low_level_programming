#include "main.h"

/**
 * _islower - main entry point
 * @c: integer paramter
 * Return: integer 1 or 0
 */

int _islower(int c)
{
	int result = 0;
	int i;

	for (i = 97; i < 97 + 26; ++i)
	{
		if (c == i)
			return (1);
	}

	return (result);
}
