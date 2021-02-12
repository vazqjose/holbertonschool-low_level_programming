#include "holberton.h"

/**
 * print_line - Draws a straight line
 *
 * @n: how many times the character _ will be printed
 * Return: No values
 */

void print_line(int n)
{
	int line;

		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
