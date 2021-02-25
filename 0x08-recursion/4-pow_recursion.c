#include "holberton.h"
/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: value to return
 * @y: power value to raise
 * Return: value after power raise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
