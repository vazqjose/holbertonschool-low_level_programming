#include "holberton.h"
/**
 *	main - Main function that calls putchar function
 *	Return: The string holberton
 */

int main(void)
{
	int i;
	char myArray[10] = "holberton";

	for (i = 0; myArray[i] != '\0'; i++)
	{
		_putchar(myArray[i]);
	}

	_putchar('\n');

	return (0);
}
