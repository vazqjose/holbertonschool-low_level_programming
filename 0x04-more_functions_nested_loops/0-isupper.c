#include "holberton.h"
/**
 * _isupper - checks for uppercase letter
 *
 * @c: Letter to be checked
 *
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
