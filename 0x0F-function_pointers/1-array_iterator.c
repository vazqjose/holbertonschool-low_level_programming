#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of array.
 * @array: array of parameters
 * @size: size of array
 * @action: pointer to the function you need to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
