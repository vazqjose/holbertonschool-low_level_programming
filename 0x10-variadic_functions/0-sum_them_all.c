#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list myArgs;

	if (n == 0 || myArgs == 0)
		return (0);

	va_start(myArgs, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(myArgs, int);
	}

	va_end(myArgs);
	return (sum);

}
