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

	if (len % 2 == 1)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
