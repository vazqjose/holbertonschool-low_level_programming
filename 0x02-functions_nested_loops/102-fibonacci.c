#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, followed by a new line
 * Return: None
 */

void main()
{
	int first = 0, second = 1, next, i;
	int n = 50;

	for (i = 0; i < n; i++)
	{
		if (i <= 1)
			next = i;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%d", next);

		if (i + 1 != n)
			printf(", ");
	}

	printf("\n");
}
