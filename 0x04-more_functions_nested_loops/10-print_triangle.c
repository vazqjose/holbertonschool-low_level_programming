#include "holberton.h"
/**
 * print_triangle - function prints a triangle
* @size: size of triangle
* Return: No return
*/

void print_triangle(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= size; x++)
	{
		for (y = 1 ; y <= size ; y++)
		{
			if (x <= size - y)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}

		_putchar('\n');
	}
}
