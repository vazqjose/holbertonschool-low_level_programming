#include "holberton.h"
/**
 * _strcat - Concatenate two strings
 * @dest: string to append to
 * @src: string to append with
 * Return: new string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
