#include "main.h"

/**
 * print_alphabet - main entry point
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	int start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		++start;
	}
	_putchar('\n');
}
