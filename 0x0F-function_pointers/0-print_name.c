#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: a pointer to a function that print a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
