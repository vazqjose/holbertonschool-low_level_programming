#include "holberton.h"
/**
 * _strlen_recursion - returns length of string
 * @s: provided string
 * Return: Lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
		return (_strlen_recursion(s + 1) + 1);
}
