#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function starts program execution
 *
 * Return: integer
 */

int main(void)
{
	char a = 'a';
	unsigned int i;

	for (i = a; i < (unsigned int)(a + 26); ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
