#include "holberton.h"
/**
 * get_bit - Returns the value of a bit at an index
 * @n: bit provided
 * @index: index of the bit
 * Return: Binary number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result = 0;

	result = n >> index;

	if (index > 32)
		return (-1);

	return (result & 1);
}
