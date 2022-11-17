#include "main.h"

/**
 * print_alphabet - main entry point
 *
 * Return: nothing
 */

void print_alphabet()
{
	int start = 'a';

	while (start != 'z')
	{
		_putchar(start);
		++start;
	}
	_putchar('\n');
}
