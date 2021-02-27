#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints all received arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: list of arguments
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
