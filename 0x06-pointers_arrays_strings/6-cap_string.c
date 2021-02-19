#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to cap
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i, j;
	char arr[] = {'\t', '\n', ';', ':', '.', ',', '!', '(', ')', '{', '}', '[', ']', '?', '\"'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)	/*	look the character up in the array	*/
		{
			if (str[i] == arr[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}

	}

	return (str);
}
