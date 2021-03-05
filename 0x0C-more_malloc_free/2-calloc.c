#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array w malloc
 * @nmemb: elements
 * @size: size in bytes each
 * Return: NULL if 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *myArr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	myArr = malloc(nmemb * size);
	if (myArr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		myArr[i] = 0;
	}

	return (myArr);
}
