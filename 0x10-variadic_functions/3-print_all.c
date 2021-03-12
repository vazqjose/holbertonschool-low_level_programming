#include "variadic_functions.h"

/**
 * fn_char - print chars
 * @myArgList: input arguments
 * Return: Nothing
 */
void fn_char(va_list myArgList)
{
	printf("%c", va_arg(myArgList, int));
}

/*
 * fn_int - print ints
 * @myArgList: input arguments
 * Return: None
 */
void fn_int(va_list myArgList)
{
	printf("%d", va_arg(myArgList, int));
}

/*
 * fn_float - print float
 * @myArgList: input arguments
 * Return: None
 */
void fn_float(va_list myArgList)
{
	printf("%f", va_arg(myArgList, double));
}

/**
 * fn_string - print string
 * @myArgList: input arguments
 * Return: None
 */
void fn_string(va_list myArgList)
{
	char *myString;

	myString = va_arg(myArgList, char *);

	if (myString == NULL)
		myString = "(nil)";

	printf("%s", myString);
}

/**
 * print_all - prints anything received as parameter
 * @format: list of types of arguments passed
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	int j = 0;
	char *divisor = ", ";

	va_list myArgList;

	myType_t myTypes[] = {
		{"c", fn_char},
		{"i", fn_int},
		{"f", fn_float},
		{"s", fn_string},
		{NULL, NULL}
	};

	va_start(myArgList, format);

	while (format[j] != '\0')
	{
		i = 0;

		while (myTypes[i].op != NULL)
		{
			if (format[j] == *(myTypes[i].op))
			{
				printf("%s", divisor);
				myTypes[i].p(myArgList);
				divisor = ", ";
			}
			i++;
		}

		j++;
	}
	printf("\n");
}
