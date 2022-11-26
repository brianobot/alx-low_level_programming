#include <stdio.h>
void print_startup(void)__attribute__((constructor));

/**
 * print_startup - Function that runs before main
 */

void print_startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
