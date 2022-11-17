#include <stdio.h>

/**
 * main - main function starts program execution
 *
 * Return: integer
 */

int main(void)
{
	char zero = '0';
	int i;

	for (i = zero; i < (zero + 10); ++i)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
