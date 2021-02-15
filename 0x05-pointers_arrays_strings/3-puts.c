#include "holberton.h"
/**
 *  _puts - prints a string to stdout
 *
 * @str: String to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
