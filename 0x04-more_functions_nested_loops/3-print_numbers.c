#include "holberton.h"

/**
* print_numbers - prints numers from 0 to 9, followed by a new line
*
* Return: Nothing
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
