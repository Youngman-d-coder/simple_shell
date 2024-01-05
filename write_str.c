#include "main.h"

/**
 * write_str - prints string to the screen
 *
 * @str: string to printed
 */
void write_str(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
