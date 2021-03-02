#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size of memory
 * @c: character input to initialize with
 * Return: array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	if (size == 0)
	{
		return (NULL);
	}

	A = (char *) malloc(size * sizeof(A));

	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}

	A[i] = '\0';

	if (A != NULL)
	{
		return (A);
		free(A);
	}
	else
	{
		return (NULL);
	}
}
