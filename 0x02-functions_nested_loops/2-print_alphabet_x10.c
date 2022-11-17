#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: nothing
 */

/**
 * print_alphabet - secondary function
 *
 * Return: nothinh
 */

void print_alphabet(void);


void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		print_alphabet();
		_putchar('\n');
	}
}

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		++letter;
	}
}
