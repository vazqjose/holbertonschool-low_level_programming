#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory
 * @b: input var to create
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *myPtr;

	myPtr = malloc(b);

	if (myPtr == NULL)
	{
		free(myPtr);
		exit(98);
	}
	else
	{
		return (myPtr);
	}
}
