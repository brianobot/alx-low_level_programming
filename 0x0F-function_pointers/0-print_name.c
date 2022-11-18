#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: a pointer to afunction that print a name
 */

void print)name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
