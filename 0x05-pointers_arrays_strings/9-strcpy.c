#include "holberton.h"

/**
 * _strcpy - copies a string to another buffer
 * @dest: destination buffer
 * @src: string input
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
