#include <stdio.h>

/**
 * main - starts program execution
 *
 * Return: integer
 */

int main(void)
{
	int base = 0;
	int i, j, k;

	for (i = base; i < (base + 10); ++i)
	{
		for (j = base + 1; j < (base + 10); ++j)
		{
			for (k = base + 1; k < (base + 10); ++k)
			{
				if ( (i == j) || (i == k) || (j == k) || (i > j) || (i > k) || (j > k))
					continue;
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');

				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}	
		}
	}
	putchar('\n');
	return (0);
}
