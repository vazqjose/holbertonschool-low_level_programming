#include "3-calc.h"
/**
 * op_add - sum 2 numbers
 * @a: num 1
 * @b: num2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 nums
 * @a: num 1
 * @b: num 2
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 nums
 * @a: num 1
 * @b: num 2
 * Return: division
 */
int op_div(int a, int b)
{
	if (b >  0)
	{
		return (a / b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}

/**
 * op_mod - calculate remainder
 * @a: num 1
 * @b: num 2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b > 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
