#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print every minute etc
 * Description: same as above
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			printf("%02d:%02d\n", hours, minutes);
			++minutes;
		}
		++hours;
		minutes = 0;
	}
}
