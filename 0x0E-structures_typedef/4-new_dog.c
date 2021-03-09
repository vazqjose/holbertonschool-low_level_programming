#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - copies a string to another buffer
 * @dest: destination buffer
 * @src: string input
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

/**
* _strlen - returns the length of a string
* @s: string var
* Return:  Length of string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}


/**
 * new_dog - create a new dog
 * @name: name of new dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myDog;
	char *newName, *newOwner;

	myDog = malloc(sizeof(dog_t));

	if (myDog == NULL)
		free(myDog);
		return (NULL);

	myDog->age = age;

	if (name == NULL)
		return (NULL);

	if (owner == NULL)
		return (NULL);

	newName = malloc(_strlen(name) + 1);

	if (newName == NULL)
	{
		free(newName);
		return (NULL);
	}

	myDog->name = _strcpy(newName, name);

	newOwner = malloc(_strlen(owner) + 1);

	if (newOwner == NULL)
	{
		free(myDog);
		return (NULL);
	}

	myDog->owner = _strcpy(newOwner, owner);

	return (myDog);
}
