#include "main.h"

/**
 * print_to_98 -  main entry point
 * @n: number to begin the counting from
 * Return: nothinh
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else 
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
