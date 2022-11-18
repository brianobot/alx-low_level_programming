#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: integer
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long sum;

	for (count = 0; count < 99; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;

		if (count == 98)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
