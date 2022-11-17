#include <stdio.h>

/**
 * main - a program that prints all combination of 2 digits numbers from 0 to 99
 *
 * Return: integer
 */

int main(void)
{
	int fTens;
	int fOnes;
	int sTens;
	int sOnes;
	int i, j;

	for (i = 0; i < 100; ++i)
	{
		fTens = i / 10;
		fOnes = i % 10;

		for (j = 0; j < 100; ++j)
		{
			sTens = j / 10;
			sOnes = j % 10;

			if (fTens < sTens || (fTens == sTens && fOnes < sOnes))
			{
				putchar(fTens + '0');
				putchar(fOnes + '0');
				putchar(' ');
				putchar(sTens + '0');
				putchar(sOnes + '0');

				if (fTens == 9 && fOnes == 8)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
