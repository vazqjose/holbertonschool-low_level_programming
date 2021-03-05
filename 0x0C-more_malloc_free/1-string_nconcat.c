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
	unsigned int i, j;
	char *newString;
	unsigned int size1, size2, newSize;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	if (n < size2)
		size2 = n;

	newSize = size1 + size2;

	newString = malloc(sizeof(char) * newSize + 1);

	if (newString == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		newString[i] = s1[i];

	for (j = 0; j < size2; j++)
	{
		newString[i] = s2[j];
		i++;
	}
	newString[i] = '\0';
	return (newString);
}
