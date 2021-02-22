#include "holberton.h"

/**
 * memset - fill memory with a constant byte
 * @s: variable receiving memory
 * @b: variable to fill with
 * @n: amount of bytes
 * Return: pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] += b;
	}
	
	return (s);
}
