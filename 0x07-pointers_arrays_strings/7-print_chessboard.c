#include "holberton.h"
/**
 * print_chessboard - prints a chess board
 * @a: input board
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

for (row = 0; row < 8; row++)
{
	for (col = 0; col < 8; col++)
	{
		if (row == 8)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(a[row][col]);
		}
	}
}
}
