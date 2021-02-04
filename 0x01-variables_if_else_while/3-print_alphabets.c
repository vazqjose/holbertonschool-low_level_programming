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
	char current_low;
	char current_up;

	current_low = 'a';
	current_up = 'A';

	while (current_low <= 'z')
	{
		putchar(current_low);
		current_low++;
	}

	while (current_up <= 'Z')
	{
		putchar(current_up);
		current_up++;
	}

	putchar('\n');

	return (0);
}
