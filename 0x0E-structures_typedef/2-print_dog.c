#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog details
 * @d: dog pointer var
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
