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
	if (c >= 48  && c <= 57)
		return (1);
	else
		return (0);
}
