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

	for (i = base; i < (base + 9); ++i)
	{
		for (j = base + 1; j < 10; ++j)
		{
			if (i == j || i > j)
				continue;
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
