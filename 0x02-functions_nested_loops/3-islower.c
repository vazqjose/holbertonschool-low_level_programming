#include "holberton.h"
/**
 * _islower - checks for lowercase letter
 *
 * @c: Letter to be checked
 *
 * Return: 1 if lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
