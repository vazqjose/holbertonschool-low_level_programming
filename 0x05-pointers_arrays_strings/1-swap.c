#include "holberton.h"

/**
 * swap_int - Swaps values of two int vars
 *
 * @a: pointer var
 * @b: pointer var
 *
 * Returns: Nothing
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
