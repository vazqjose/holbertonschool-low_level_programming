#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: dog to free up
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
