#include "holberton.h"
/**
* print_times_table - function that prints the n times table, starting with 0
*@n: times to be printed
* Return: Always 0
*/

void print_times_table(int n)
{
	int i;
	int j;
	int result;
	int digit1;
	int digit2;

	if (n > 0 && n < 16)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				result = i * j;
				digit1 = (result / 10 + '0');
				digit2 = (result % 10 + '0');

				if (j == 0)
				{
					_putchar(result + '0');
				}
				else if (result <= n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result > n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(digit1);
					_putchar(digit2);
				}
			}
		}
	}
}
