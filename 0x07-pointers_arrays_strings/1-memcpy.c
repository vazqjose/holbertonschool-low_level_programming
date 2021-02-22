#include "holberton.h"

/**
 * _memcpy - copies n bytes to 
 * @dest: variable receiving memory
 * @src: variable to copy from
 * @n: amount of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest += src[i];
	}

	return (dest);
}
