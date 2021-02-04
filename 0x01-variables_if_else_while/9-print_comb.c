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
	int current;

	current = '0';

	while (current <= '9')
	{
		putchar(current);

		if (current != '9')
		{
			putchar(',');
			putchar(' ');
			current++;
		}
	}

	putchar('\n');

	return (0);
}
