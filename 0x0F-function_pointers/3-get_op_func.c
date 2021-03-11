#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * @s: option chosen
 * Return: pointer to function that corresponds to operator given
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != '\0')
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}

		i++;
	}
	return (NULL);
}
