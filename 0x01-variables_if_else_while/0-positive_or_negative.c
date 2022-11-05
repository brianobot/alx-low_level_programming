#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* main - function to determine if number is positive, negative or zero
 *
 * Return - 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is poitive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
