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

	A = malloc(size * sizeof(*A));

	if (A != NULL)
	{
		for (i = 0; i < size; i++)
		{
			A[i] = c;
		}

		A[i] = '\0';

		return (A);
		free(A);
	}
	else
	{
		return (NULL);
	}
}
