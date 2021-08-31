#include "search_algos.h"
#include <math.h>

/**
 * binary_search- searches for a value in an array of integers
 * using binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int leftB = 0;
	int rightB = size - 1;
	int midPos = 0;
	int i = 0;

	if (array == NULL)
		return (-1);

	while (leftB <= rightB)
	{
		midPos = (leftB + rightB) / 2;
		midPos = (midPos + 0.5) * 1;
		midPos = midPos / 1;

		printf("Searching in array: ");

		for (i = leftB; i <= rightB; i++)
		{
			printf("%i", i);
			if (i < rightB)
				printf(", ");
		}
		printf("\n");

		if (value > array[midPos])
			leftB = midPos + 1;
		else if (value < array[midPos])
			rightB = midPos - 1;
		else if (array[midPos] == value)
		{
			printf("\n");
			return (midPos);
		}
	}
	return (-1);
}
