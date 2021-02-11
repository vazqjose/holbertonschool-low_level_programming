#include "holberton.h"
/**
 * _isdigit - checks if input is a digit
 *
 * @c: input to be checked
 *
 * Return: 1 if its a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
	{
		return (0);
	}
	else if (c > 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
