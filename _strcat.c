#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: destination of string.
 * @src: source of string.
 *
 * Return: returns the destination on success.
 */
char *_strcat(char *dest, const char *src)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';
	return (dest);
}
