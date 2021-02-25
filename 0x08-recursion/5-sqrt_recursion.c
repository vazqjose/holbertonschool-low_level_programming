#include "holberton.h"
int sq_check(int n, int c);

/**
 * _sqrt_recursion - Returns natural square root of number
 * @n: number received
 * Return: Square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	return (sq_check(n, 1));
}
/**
 * sq_check - checks if var is prime
 * @n: number to check
 * @c: square root
 * Return: value of c if square root, otherwise -1
 */
	int sq_check(int n, int c)
	{
		if (n == c * c)
		{
			return (c);
		}

		if (c * c > n)
		{
			return (-1);
		}
		return (sq_check(n, c + 1));
	}
