#include "holberton.h"

/**
 * print_sign - Prints sign of a number
 * @n: number to be evaluated
 * Return: 1 if n is greater than zero, 0 if n = 0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return ('+');
	}
	else if (n == 0)
	{
		return ('0');
	}
	else if (n < 0)
	{
		return ('-');
	}
	
	return (0);
}
