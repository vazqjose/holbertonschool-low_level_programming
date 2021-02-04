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
	int current_no;
	char current_ch;

	current_no = '0';
	current_ch = 'a';

	while (current_no <= '9')
	{
		putchar(current_no);
		current_no++;
	}

	while (current_ch <= 'f')
	{
		putchar(current_ch);
		current_ch++;
	}

	putchar('\n');
	return (0);
}
