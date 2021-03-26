#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{

		}
		else
		{
			return (0);
		}
	}

	return (0);
}
