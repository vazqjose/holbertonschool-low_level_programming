#include "holberton.h"

/**
 *get_endianness - Check the endianness.
 *Return: Nothing
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
