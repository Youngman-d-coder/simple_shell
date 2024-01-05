#include "main.h"

/**
 * _sizeof - checks for the size of input data
 *
 * @type: type of data input
 *
 * Return: length of data
 */
size_t _sizeof(const char *type)
{
	const char *ptr = type;
	size_t len = 0;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}

	return (len);
}
