#include "main.h"

/**
 * print_last_digit - entry point
 * description: print last digit of a number
 * @number: integer argument
 *
 * Return: integer
 */

int print_last_digit(int number)
{
	int last;

	if (number >= 0)
	{
		last = number % 10;
		_putchar(last + '0');
		return (last);
	}

	last = (-1 * (number % 10));
	_putchar(last + '0');
	return (last);
}

