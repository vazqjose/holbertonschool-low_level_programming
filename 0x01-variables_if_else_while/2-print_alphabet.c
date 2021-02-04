#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *
 *Return: Alwys 0 (Sucess)
 */

int main(void)
{
	char current;

	current = 'a';

	while (current <= 'z')
	{
		putchar(current);
		current++;
	}

	putchar('\n');

	return (0);
}
