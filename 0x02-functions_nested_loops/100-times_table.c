#include "main.h"

/**
 * print_time_table - prints the n times table
 * @n: number of times table
 * Return: no return
 */

void print_times_table(int n)
{
	int a, b, op;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; ++b)
			{
				op = a * b;
				_putchar(44);
				_putchar(32);
				if (op <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar((op % 10) + 48);
				}
				else
				{
					_putchar((op / 100) % 10) + 48);
					_putchar((op / 10) % 10) + 48);
					_putchar((op % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
