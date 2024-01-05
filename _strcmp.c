#include "main.h"

/**
 * _strcmp - helps compare command output
 *
 * Return: sorted value
 */
int _strcmp(const void *a, const void *b)
{
	return (strcmp(*(char **)a, *(char **)b));
}
