#include "holberton.h"
/**
* print_times_table - function that prints the n times table, starting with 0
* @n: times to be printed
* Return: Always 0
*/

void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n < 16)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (j == 0)
				{
					_putchar(result + '0');
				}
				else if (result < 10)  /*  single digit  */
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result > 9 && result < 100)  /*  2 digits  */
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else if (result > 99)  /*  3 digits  */
				{
					_putchar(' ');
					_putchar(result / 100 + '0');
					_putchar((result % 100) / 10  + '0');
					_putchar(result % 10 + '0');
				}
				if (n != j)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
