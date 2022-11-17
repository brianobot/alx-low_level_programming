#include "main.h"

/**
 *print_alphabet - function to prints all alphabet
 *Description: a function that prints the alphabet,
 *in lowecase followed by a new line
 *Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
