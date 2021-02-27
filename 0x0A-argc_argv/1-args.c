#include "holberton.h"
#include <stdio.h>
/**
 * main - function that prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: function name
 */

int main(int argc, char *argv[])
{
	(void) argv;

	if (argc > 1)
	{
		printf("%d\n", argc);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
