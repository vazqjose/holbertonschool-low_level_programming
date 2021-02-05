#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *
 *Return: Always 0 (Sucess)
 */

int main(void)
{
	int digit1 = '0';
	int digit2 = '0';

	while (digit1 <= '9')
	{

		while (digit2 <= '9')
		{
			if (digit2 == digit1)
			{
				/*	do nothing	*/
			}
			else if (digit2 == '0')
			{
			}
			else
			{
				putchar(digit1);
				putchar(digit2);

				if (digit1 == '9' && digit2 == '9')
				{
					digit1++;
					digit2++;
					break;
				}

				putchar(',');
				putchar(' ');

				if (digit2 != '9')
				{
					digit2++;
				}
				else
				{
					digit2 = '0';
					digit1++;
				}
			}
		}
	}

		putchar('\n');
		return (0);
}
