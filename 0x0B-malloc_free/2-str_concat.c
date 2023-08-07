#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concanated string, NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int a = 0, b = 0, c = 0, d = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	d = a + b;
	str = malloc((d * sizeof(char)) + 1);

	if (str == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= a)
			str[c] = s1[c];

		if (c >= a)
		{
			str[c] = s2[b];
			b++;
		}

		c++;
	}

	str[c] = '\0';
	return (str);
}
