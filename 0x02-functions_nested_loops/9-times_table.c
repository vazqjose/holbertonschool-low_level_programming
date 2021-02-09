#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: No return
 *
 */

void times_table(void)
{
	int i;
	int j;
	int result;
	int digit1;
	int digit2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			digit1 = (result / 10 + '0');
			digit2 = (result % 10 + '0');

			if (j == 0)
			{
				_putchar(result + '0');
			}
			else if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(digit1);
				_putchar(digit2);
			}
		}
		_putchar('\n');
	}

}
