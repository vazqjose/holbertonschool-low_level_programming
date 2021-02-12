#include "holberton.h"
/**
 * print_most_numbers - prints most numbers except for 2 and 4
 *
 * Returns: Nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52 )
		{
			_putchar(i);
		}
	}

	_putchar('\n');

}
