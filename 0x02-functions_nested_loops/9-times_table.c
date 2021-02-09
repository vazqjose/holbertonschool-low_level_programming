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
	int digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;					/*	get result of each row * column element		*/
			digit = (result / 10 + '0');		/*	obtain the first digit of result		*/

			/**
			 *  if the first digit of the multiplication is zero, do not print it
			 *  Replace it with a blank space instead
			 */

			if (digit != '0')
			{
				_putchar(result / 10 + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar(result % 10 + '0');

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			
		}

		_putchar('\n');
	}

}
