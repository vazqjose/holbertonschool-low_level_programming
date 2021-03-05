#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: range from
 * @max: range to
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int i, *myArr, arrSize;

	arrSize = 0;
	arrSize = max - min;

	if (min > max)
		return (0);

	myArr = malloc((sizeof(int) * arrSize) + 1);

	if (myArr == NULL)
		return (0);

	for (i=0; min <= max; i++)
	{
		myArr[i] = min;
		min++;
	}

	return (myArr);
}
