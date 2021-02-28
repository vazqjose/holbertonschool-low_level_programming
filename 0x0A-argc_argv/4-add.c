#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: numbers
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	/**
	 * sum 56 9 6 2
	 * argc = 5
	 * argv[0] = sum
	 */

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isalpha(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

		printf("%d\n", sum);

	return (0);
}
