#include "holberton.h"
/**
 * print_chessboard - prints a chess board
 * @a: input board
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
for (row = 0; row < 8; row++)
{
	for (col = 0; col < 8; col++)
	{
		if (row == 8)
		{
			putchar('\n');
		}
		else
		{
			putchar(a[row][col]);
		}
	}
}
}
