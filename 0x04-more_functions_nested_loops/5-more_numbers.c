#include "holberton.h"
/**
 * more_numbers - Prints 10 times numbers from 0 to 14
 *
 * Return: No return
 */


void more_numbers(void)
{
	int row;
	int col;

	for (row = 0; row < 11; row++)
	{
		for (col = 0; col < 15; col++)
		{
			if (col > 9)
			{
				_putchar(col / 10 + '0');
			}

			_putchar(col % 10 + '0');
		}

		_putchar('\n');
	}
}
