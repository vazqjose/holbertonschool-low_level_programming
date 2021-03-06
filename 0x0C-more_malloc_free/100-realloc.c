#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: provided pointer
 * @old_size: size of provided ptr
 * @new_size: new size in bytes of the new ptr
 * Return: Null if zero
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

		free(ptr);
		newPtr = malloc(sizeof(char) * new_size);
		return (newPtr);
}
