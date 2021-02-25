#include "holberton.h"
int dv(int n, int d);
/**
 * is_prime_number - checks if input number is prime
 * @n: number to check
 * Return: 1 if number is prime, otherwise return 0
 */

int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
	{
		return (0);
	}

	return (dv(n, d));
}

/**
 * dv - checks if number is prime
 * @n: input integer
 * @d: digit remainder
 * Return: 1 if prime or 0 if not
 */

int dv(int n, int d)
{
	if (n % d == 0)
	{
		return (0);
	}
	if (d > n / d)
	{
		return (1);
	}

	return (dv(n, d + 1));
}
