#include "holberton.h"

/**
 * _isalpha - Checks if variable is letter
 *
 * @c: Letter to be evaluated
 *
 * Return: 1 if letter or 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
