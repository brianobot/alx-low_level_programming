#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to copy string
 * @str: string to be copied
 *
 * Return: pointer or Null
 */
char *_strdup(char *str)
{
	char *alloc_mem;
	unsigned int i;
	unsigned int string_len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + string_len) != '\0')
		string_len++;

	string_len++;

	alloc_mem = malloc(sizeof(*str) * string_len);

	if (alloc_mem == NULL)
		return (NULL);

	for (i = 0; i < string_len; i++)
		alloc_mem[i] = *(str + i);
	alloc_mem[i] = '\0';

	return (alloc_mem);
}
