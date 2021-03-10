#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: var to print
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	/* f(name) can also be implemented*/
	(*f)(name);
}
