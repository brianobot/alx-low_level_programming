#include <stdio.h>

/**
 * print_rev - takes a string and prints it in reverse
 *
 * @s first parameter
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		printf("%c", s[i]);
	printf('\n');
}
