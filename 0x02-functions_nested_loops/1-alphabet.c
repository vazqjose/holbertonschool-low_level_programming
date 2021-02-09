#include "holberton.h"
/**
 * print_alphabet - prints the alphabet
 *
 * Return: Does not return any value
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
