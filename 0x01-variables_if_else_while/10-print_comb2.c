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
	int digit1;
	int digit2;

	digit1 = '0';
	digit2 = '0';

	while (digit1 <= '9')
	{
		while (digit2 <= '9')
		{
			putchar(digit1);
			putchar(digit2);

			if (digit2 != '9')
			{
				putchar(',');
				putchar(' ');
				digit2++;
			}
			else if (digit1 == '9' && digit2 == '9')
			{
				digit1++;
				digit2++;
			}
			else
			{
				digit1++;
				digit2++;
			}
		}
	}

	putchar('\n');
	return (0);
}
