#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: No return
 *
 */

void rev_string(char *s)
{
	int i, len;
	char temp1, temp2;

	for (len = 0; s[len] != '\0'; len++)
	{

	}

	len--;

	for (i = 0; i <= len; i++)
	{
		temp1 = s[i];
		temp2 = s[len];

		s[i] = temp2;
		s[len] = temp1;

		len--;
	}
}
