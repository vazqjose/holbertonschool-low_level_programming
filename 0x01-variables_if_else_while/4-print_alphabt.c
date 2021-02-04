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
	char current;

	current = 'a';

	while (current <= 'z')
	{
		if (current == 'q')
		{
			current++;
		}
		else if (current == 'e')
		{
			current++;
		}
		else
		{
			putchar(current);
			current++;
		}
	}

	putchar('\n');

	return (0);
}
