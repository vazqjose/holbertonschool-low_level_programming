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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++) /* get size of string1 */
		;
	for (j = 0; s2[j] != '\0'; j++) /* get size of string2 */
		;
	newsize = i + j + 1;
	newstr = malloc(newsize * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (n1 = 0; n1 < i; n1++)
		newstr[n1] = s1[n1];
	for (n2 = n1, s = 0; n2 < newsize; n2++, s++)
		newstr[n2] = s2[s];

	return (newstr);
}
