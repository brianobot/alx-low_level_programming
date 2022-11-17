#include <stdio.h>

/**
 * main - starts program execution
 *
 * Return: integer
 */

int main(void)
{
	int base = 48;
	int i;

	for (i = base; i < (base + 10); ++i)
	{
		putchar(i);

		if (i == (base + 9))
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
