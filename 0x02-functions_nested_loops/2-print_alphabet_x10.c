#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: nothing
 */
void print_alphabet(void);


void print_alphabet_x10(void)
{
	int i;
	for (i = 0; i < 10; ++i)
	{
		print_alphabet();
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
