#include "holberton.h"
/**
 * flip_bit - returns the number of bits you would need to flip
 * @m: bit provided
 * @n: bits to flip
 * Return: Binary number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipCount = 0;
	unsigned long int number1 = n;
	unsigned long int number2 = m;
	unsigned long int result = 0;

	result = number1 ^ number2;

	while (result != 0)
	{
		if (result & 1)
			flipCount++;

		result = result >> 1;
	}
	return (flipCount);
}
