#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function beginds program execution
 *
 * Return: integer
 */

int main(void)
{
	char lower_base = 'a';
	char lower_size = lower_base + 25;
	int i;

	for (i = lower_base; i <= lower_size; ++i)
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
