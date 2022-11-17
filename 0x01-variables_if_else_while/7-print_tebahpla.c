#include <stdio.h>

/**
 * main - statr program execution
 *
 * Return: integer
 */

int main(void)
{
	char z = 'z';
	char a = 'a';
	int i;

	for (i = z; i >= a; --i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
