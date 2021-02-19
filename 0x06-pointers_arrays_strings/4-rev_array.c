#include "holberton.h"

/**
 * reverse_array - reverses an array of integres
 * @a: first array
 * @n: number of elements
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	n--;

	for (i = 0; i <= n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
