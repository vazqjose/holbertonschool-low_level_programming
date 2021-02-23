#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: string to search in
 * @c: character to look for
 * Return: Pointer to first ocurrence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c; i++)
	{
		
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (0);
	}
}
