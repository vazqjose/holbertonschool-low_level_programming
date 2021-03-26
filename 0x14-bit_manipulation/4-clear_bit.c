#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: bit provided
 * @index: index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 32)
		return (-1);

	mask = mask << index;

	*n = *n & ~mask;

	return (1);
}
