#include "holberton.h"

/**
 * puts_half - prints the second half of string
 * @str: string to divide
 * Returns: Nothing
 */

void puts_half(char *str)
{
	int i, n, len;

	for (len = 0; str[len] != '\0'; len++)
	{

	}

	if (len % 2 == 0)
	{
		n = (len) / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n + 1; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
