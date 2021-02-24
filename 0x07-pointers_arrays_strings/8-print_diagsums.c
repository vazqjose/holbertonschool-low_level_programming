#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: input array
 * @size: size of array
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, total, total2;

	total = 0;
	total2 = 0;

	for (i = 0; i < (size * size); i += size + 1)
	{
		total += a[i];
	}

	for (i = size - 1; i < (size * size) - 1; i += size - 1)
	{
		total2 += a[i];
	}

	printf("%d, %d\n", total, total2);
}
