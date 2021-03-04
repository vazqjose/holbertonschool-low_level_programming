#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: arg1
 * @av: arg2
 * Return: Pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, sum;
	char *mystr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{

		}
		sum += j + 1;
	}

	mystr = malloc(sizeof(char) * sum + 1);

	if (mystr == NULL)
		return (NULL);

	sum = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			mystr[sum] = av[i][j];
			sum++;
		}

		mystr[sum] = '\n';
		sum++;
	}
	mystr[sum] = '\0';
	return (mystr);
}
