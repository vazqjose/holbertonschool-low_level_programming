#include "holberton.h"
/**
 * rot13 - Encodes a string using rot13
 * @str: string to encode
 * Return: encoded string
 */

char *rot13(char *str)
{
	char arr1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char arr2[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; arr1[j] != '\0'; j++)
		{
			if (str[i] == arr1[j])
			{
				str[i] = arr2[j];
				break;
			}
		}
	}

	return (str);
}
