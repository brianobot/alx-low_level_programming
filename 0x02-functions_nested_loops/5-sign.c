#include "main.h"

/**
 * print_sign - main entry function
 * @n : first parameter
 *
 * Return: integer 1 or 0
 */

int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		_putchar(43);
		sign = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		sign = 0;
	}
	else if (n < 0)
	{
		_putchar(45);
		sign = -1;
	}

	return (sign);
}
