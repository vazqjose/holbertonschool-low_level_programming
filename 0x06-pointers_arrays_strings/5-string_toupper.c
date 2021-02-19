#include "holberton.h"

/**
 * string_toupper - change lowercase string to uppercase
 *@c: array pointer
 * Return: uppercase string
 */

char *string_toupper(char *c)
{
	int i;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}
