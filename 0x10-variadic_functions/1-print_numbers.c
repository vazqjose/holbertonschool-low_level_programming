#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers received
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list myList;

	if (myList == 0)
		return;

	va_start(myList, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(myList, int));

		if (separator != NULL && i != n)
			printf("%s", separator);
	}

	printf("\n");

	va_end(myList);
}
