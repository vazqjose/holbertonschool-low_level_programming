#include "holberton.h"
int string_compare(char *s, int index);

/**
 * _strlen_recursion - counts length of string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * string_compare - compare strings
 * @s: array
 * @index: index
 * Return: 1 if compare
 */

int string_compare(char *s, int index)
{
	if (index <= 1)
	{
		return (1);
	}
	else if (*s == s[index - 1])
	{
		return (string_compare(s + 1, index - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - returns if string is palindrome
 * @s: string to evaluate
 * Return: 1 if palindrome
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}

	return (string_compare(s, len));
}
