#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[j] = src[i];
		++j;
	}
	dest[j] = '\0';

	return (dest);
}
