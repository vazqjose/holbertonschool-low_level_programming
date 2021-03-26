#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i, max, bit = 0, expr = 0;
	unsigned int resultBin = 0;

	if (b == NULL)
		return (0);

	for (max = 0; b[max] != '\0'; max++)
		;

	for (i = max - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			bit = 1;
		else if (b[i] == '0')
			bit = 0;
		else
			return (0);

		resultBin += bit << expr;
		expr++;
	}

	return (resultBin);
}
