#include "main.h"

/**
 * _strcpy - copies string from one directory to another
 *
 * @dest: destination to be copied to.
 * @src: source to be copied from.
 *
 * Return: returns destination on success.
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
