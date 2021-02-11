#include "holberton.h"
/**
 * _isdigit checks for uppercase letter
 *
 * @c: Letter to be checked
 *
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
