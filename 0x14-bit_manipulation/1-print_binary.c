#include "holberton.h"
/**
 * print_binary - prints binary number
 * @n: integer to convert
 * Return: Binary number
 */

void print_binary(unsigned long int n)
{
	unsigned long int newN, mask = 1;
	int lenWidth = 0;

	newN = n;
	while (newN > 0)
	{
		lenWidth++;
		newN >>= 1;
	}

	lenWidth -= 1;

	if (lenWidth > 0)
	{
		mask = mask << lenWidth;
	}

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
		}
			else
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
