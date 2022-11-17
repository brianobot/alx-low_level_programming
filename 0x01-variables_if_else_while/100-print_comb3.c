#include <stdio.h>

/**
 * main - starts function execution
 *
 * Return: integer
 */

int main(void)
{
	int base = 0;
	int i, j;

	for (i = base; i < (base + 10); ++i)
	{
		for (j = base + 1; j < 10; ++j)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
