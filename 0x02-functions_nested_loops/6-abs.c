#include "main.h"

/**
 * _abs - main entry point
 * description: computes the absolute value of a num
 * @number: integer argument
 *
 * Return: integer
 */

int _abs(int number)
{
	int val;

	if (number >= 0)
		return (number);
	val = (int) number / -1;

	return (val);
}
