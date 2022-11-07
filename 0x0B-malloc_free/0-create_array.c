#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with speicifc char
 * @size: size of the array
 * @c: char to be used to initialize the array
 *
 * Returns: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *s;
	int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++
	}
	s[i] = '\0'
	return (s);
}
