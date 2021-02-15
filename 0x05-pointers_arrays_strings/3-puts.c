#include "holberton.h"
#include <string.h>

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
	int len;

	len = strlen(str);

	for (i=0; i < len; i++)
	{
		_putchar(str[i] + '0');
	}
}
