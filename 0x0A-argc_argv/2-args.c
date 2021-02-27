#include "holberton.h"
#include <stdio.h>
/**
 * main - function that prints all received arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: list of arguments
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
