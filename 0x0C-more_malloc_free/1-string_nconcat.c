#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to concatenate
 *
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p, q, length1, length2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)
		;

	for (length2 = 0; s2[length2] != '\0'; length2++)
		;

	str = malloc(length1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (p = 0; s1[p] != '\0'; p++)
		str[p] = s1[p];

	for (q = 0; q < n; q++)
	{
		str[p] = s2[q];
		p++;
	}

	str[p] = '\0';
	return (str);
}
