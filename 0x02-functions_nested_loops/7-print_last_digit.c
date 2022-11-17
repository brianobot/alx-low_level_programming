#include "main.h"

/**
 * print_last_digit - entry point
 * description: print last digit of a number
 * @int: integer argument
 *
 * Return: integer
 */

int print_last_digit(int number)
{
	int last;

	last = number % 10;
	_putchar((last) + '0');

	return (last);
}

