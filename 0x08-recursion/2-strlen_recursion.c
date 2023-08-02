#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string
 * @s: input string
 * Return: length of a string s
 */

int _strlen_recursion(char *s)
{
	int leng = 0;

	if (*s)
	{
		leng++;
		leng += _strlen_recursion(s + 1);
	}

	return (leng);
}


