#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function for program execution
 *
 * Return: integer
 */

int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	rem = n % 10;

	if (rem > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	else if (rem == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if ((rem < 6) && (rem != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);

	return (0);
}

