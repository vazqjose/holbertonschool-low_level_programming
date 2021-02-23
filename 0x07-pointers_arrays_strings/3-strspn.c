#include "holberton.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: number of bytes to get
 * @accept: string to get bytes from
 * Return: Number of bytes from accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != s[j]; i++)
		{
			if (accept[i] == '\0')
			{
				return (j);
			}
		}
	}
	return (j);
}
