#include "holberton.h"

/**
 * puts2 - prints even chars of a string
 * @str: character to evaluate
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';  i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
