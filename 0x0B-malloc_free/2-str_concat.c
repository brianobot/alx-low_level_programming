#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first arguments
 * @s2: second arguments
 *
 * Return: Null or pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *alloc_mem;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_len) != '\0')
		s1_len++;

	while (*(s2 + s2_len) != '\0')
		s2_len++

	alloc_mem = malloc(1 + (s1_len * sizeof(*s1)) + (s2_len * sizeof(*s2)));

	if (alloc_mem == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		alloc_mem[i] = *(s1 + i);
	for (j = 0; j < s2_len; j++, i++)
		alloc_mem[i] = *(s2 + j);

	return (alloc_mem);
}
