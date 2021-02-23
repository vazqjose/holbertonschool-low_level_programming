#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: number of bytes
 * @accept: string to search in
 * Return: Pointer to s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				return (&s[j]);
			}
		}
	}
	return (0);
}
