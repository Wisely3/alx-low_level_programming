#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 *		space in memory, which contains a copy of
 *		the string given as a parameter
 * @str: input string
 *
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	int p = 0, j = 1;
	char *e;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	e = malloc((j * sizeof(char)) + 1);

	if (e == NULL)
		return (NULL);

	while (p < j)
	{
		e[p] = str[p];
		p++;
	}

	e[p] = '\0';
	return (e);
}
