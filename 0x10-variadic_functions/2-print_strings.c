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
	char *myStr;

	va_list myList;

	va_start(myList, n);

	for (i = 0; i < n; i++)
	{
		myStr = va_arg(myList, char *);

		if (myStr == '\0')
			myStr = "(nil)";
		else
			printf("%s", myStr);

		if (separator != '\0' && i + 1 != n)
			printf("%s", separator);
	}

	printf("\n");

	va_end(myList);
}
