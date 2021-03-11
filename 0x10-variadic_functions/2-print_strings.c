#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between strings
 * @n: number of strings received
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myList;

	va_start(myList, n);

	for (i = 1; i <= n; i++)
	{
		if (va_arg(myList, char*) == '\0')
			printf("(nil)");
		else
			printf("%s", va_arg(myList, char*));

		if (separator != '\0' && i != n)
			printf("%s", separator);
	}

	printf("\n");

	va_end(myList);
}
