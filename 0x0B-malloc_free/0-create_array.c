#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and init
 * @size: size of the array
 * @c: char to be used to initialize the array
 *
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
