#include "main.h"

/**
 * _strlen - counts the length of given string
 *
 * @str: pointer to given string
 *
 * Return: length of given string
 */
int _strlen(const char *str)
{
	size_t len = 0;

	if (str[0] == '\0')
		return (1);

	while (str[len] != '\0')
		len++;

	return (len);
}
