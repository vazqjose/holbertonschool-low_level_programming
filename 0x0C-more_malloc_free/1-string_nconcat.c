#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: 3nd string
 * @n: num of bytes
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, index;
	char *newString;
	unsigned int size1, size2, newSize;

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	if (n < size2)
	{
		size2 = n;
	}

	newSize = sizeof(char) * size1 + size2 + 1;

	newString = malloc(newSize);

	if (newString == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		newString[i] = s1[i];
	}

	for (j = i, index = 0; j < newSize; j++, index++)
	{
		newString[j] = s2[index];
	}

	return (newString);
}
