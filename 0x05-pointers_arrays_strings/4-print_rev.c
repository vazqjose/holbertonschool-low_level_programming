#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: Input string to count
 * Return: Nothing
 *
 */

void print_rev(char *s)
{
	int i, len;

	for (len = 0; s[len] != '\0'; len++)
	{

	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
