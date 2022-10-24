#include "main.h"

/**
 * _strcpy - copies the string pointed to by the src
 *
 * @src: source of string parameter input
 * @dest: destinatio of string
 *
 * Return: Pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
