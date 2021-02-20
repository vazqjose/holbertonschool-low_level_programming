#include "holberton.h"
#include <stdio.h>

/**
 * leet - encondes a string into 1337
 * @str: String to be encoded
 * Return: Encoded string
 */

char *leet(char *str)
{
	char letArr[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char numArr[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letArr[j] != '\0'; j++)
		{
			if (str[i] == letArr[j])
			{
				str[i] = numArr[j];
			}
		}
	}
	return (str);
}
