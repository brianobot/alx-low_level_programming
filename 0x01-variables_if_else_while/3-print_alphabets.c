#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function starts program execution
 *
 * Return: integer
 */

int main(void)
{
	char lower_base = 'a';
	char upper_base = 'A';
	char lower_size = lower_base + 25;
	char upper_size = upper_base + 25;
	int i;

	for (i = lower_base; i <= lower_size; ++i)
		putchar(i);
	for (i = upper_base; i <= upper_size; ++i)
		putchar(i);
	putchar('\n');

	return (0);
}
