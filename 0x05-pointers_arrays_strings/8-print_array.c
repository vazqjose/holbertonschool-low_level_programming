#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints given elements of an array
 * @a: input pointer var
 * @n: number of elements to print
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
