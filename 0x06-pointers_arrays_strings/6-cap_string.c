#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to cap
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i, j;
	char arr[] = {'\t', '\n', ';', ':', '.', ',', '!', '(', ')'
	, '{', '}', '?', '\"', ' '};

	i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		i++;
	}


	for ( ; str[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i - 1] == arr[j])
				{
					str[i] -= 32;
				}
			}
		}
	}

	return (str);
}
