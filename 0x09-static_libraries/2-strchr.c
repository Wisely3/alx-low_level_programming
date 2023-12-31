#include "main.h"
#include <stdio.h>

/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to c, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return (NULL);
}
