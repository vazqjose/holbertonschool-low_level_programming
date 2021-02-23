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
	int n = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				n++;
				break;
			}
		}
	}
	n++;
	return (n);
}
