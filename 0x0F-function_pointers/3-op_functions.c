#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add -Adds rwo numbers 
 * @a: a number
 * @b: a number
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates then difference of 2 numbers
 * @a: a number
 * @b: a number
 *
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calcautes the multiplication
 * @a: a number
 * @b: a number
 *
 * Return: result of mul
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - calcuates divison
 * @a: a number
 * @b: a number
 *
 * Return: result of div
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - calculates mod
 * @a: a number
 * @b: a number
 * Return: result of mod
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
