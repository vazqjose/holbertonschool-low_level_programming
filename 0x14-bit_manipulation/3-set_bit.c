#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at the index
 * @n: bit provided
 * @index: index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 32)
		return (-1);

	mask = mask << index;

	*n = *n | mask;

	return (1);
}
