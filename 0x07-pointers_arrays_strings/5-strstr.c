#include "holberton.h"

/**
 * _strstr - Locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *search;

	while (*haystack != '\0')
	{
		start = haystack;
		search = needle;

		while (*needle != '\0' && *search != '\0' && *search == *haystack)
		{
			haystack++;
			search++;
		}
		if (*search == '\0')
		{
			return (start);
		}

		haystack = start + 1;
	}
	return (0);
}
