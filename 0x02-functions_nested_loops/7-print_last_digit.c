#include "holberton.h"

/**
 * print_last_digit - Returns value of last digit
 *
 * @n: number to evaluate
 * Return: The last digit of given number
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n <= 0)
	{
		n = n * -1;
	}

	_putchar(n + '0');

	return (n);
}
