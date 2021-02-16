#include "holberton.h"

/**
 * puts_half - prints the second half of string
 * @str: string to divide
 * Returns: Nothing
 */

void puts_half(char *str)
{
	int n, len;

	for (len = 0; str[len] != '\0'; len++)
	{

	}

	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
		n++;
	}

	for (; n < len; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
