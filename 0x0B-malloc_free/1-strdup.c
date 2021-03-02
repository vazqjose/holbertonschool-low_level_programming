#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * _strdup - returns pointer to a new string
 * @str: input string to be duplicated
 * Return: if str = NULL, or a pointer to the duplicated string character
 */

char *_strdup(char *str)
{
	char *newstr;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 1; str[i] != '\0'; i++)
	{
	/* get size of string */
	}

	newstr = malloc(sizeof(*str) * i);

	if (malloc(INT_MAX) == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			newstr[i] = str[i];
		}

		return newstr;
	}
}
