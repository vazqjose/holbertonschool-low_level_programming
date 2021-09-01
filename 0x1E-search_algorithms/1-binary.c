#include "search_algos.h"
#include <math.h>

/**
 * print_array - prints current state of array
 * @array: array to be printed
 * @leftB: left boundary of portion
 * @rightB: right boundary of portion
 * Return: Nothing
 */
void print_array(int *array, int leftB, int rightB)
{
	int i = 0;

	if (leftB <= rightB)
	{
		printf("Searching in array: ");

		for (i = leftB; i <= rightB; i++)
		{
			printf("%i", array[i]);
			if (i < rightB)
				printf(", ");
		}
		printf("\n");
	}
}


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
	unsigned int midPos = 0;

	if (array == NULL)
		return (-1);

	while (leftB <= rightB)
	{
		midPos = (leftB + rightB) / 2;

		if (value > array[midPos])
		{
			print_array(array, leftB, rightB);
			leftB = midPos + 1;
		}
		else if (value < array[midPos])
		{
			print_array(array, leftB, rightB);
			rightB = midPos - 1;
		}
		else if (array[midPos] == value)
		{
			return (midPos);
		}
	}
	return (-1);
}
