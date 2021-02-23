#include "holberton.h"

/**
 * _strstr - Locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i]; j++)
		{
			return (&needle[j]);
		}
	}
	return (0);
}
