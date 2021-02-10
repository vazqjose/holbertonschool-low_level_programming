#include "holberton.h"
/**
* print_times_table - function that prints the n times table, starting with 0
* @n: times to be printed
* Return: Always 0
*/

void print_times_table(int n)
{
	int i, j, result;
	int n;

	if (n > 0 && n < 16)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				if (j == 0)
				{
					putchar(result + '0');
				}
				else if (result < 10)  /*  single digit  */
				{
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(result + '0');
					putchar(',');
				}
				else if (result > 9 && result < 100)  /*  2 digits  */
				{
					putchar(' ');
					putchar(' ');
					putchar(result / 10 + '0');
					putchar(result % 10 + '0');
					putchar(',');
				}
				else if (result > 99)  /*  3 digits  */
				{
					putchar(' ');
					putchar(result / 100 + '0');
					putchar((result % 100) / 10  + '0');
					putchar(result / 10 + '0');
					putchar(',');
				}
			}

			putchar('\n');
		}
	}
}
