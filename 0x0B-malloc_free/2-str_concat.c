#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: new concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i, j, n1, n2, newsize, s;

	for (i = 0; s1[i] != '\0'; i++) /* get size of string1 */
	for (j = 0; s2[j] != '\0'; j++) /* get size of string2 */

	newstr = malloc((sizeof(*s1) * i) + (sizeof(*s2) * j) + 1);

	if (newstr == NULL)
	{ return (NULL); }
	else
	{
		newsize = i + j + 1;
		for (n1 = 0; n1 < i; n1++)
		{
			newstr[n1] = s1[n1];
		}
		s = 0;
		for (n2 = n1; n2 < newsize; n2++)
		{
			newstr[n2] = s2[s];
			s++;
		}
		return (newstr);
	}
}
