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

	current = 'z';

	while (current >= 'a')
	{
		putchar(current);
		current--;
	}

	putchar('\n');

	return (0);
}
