#include "main.h"

/**
 * _strlen_recursion - returns length of a given string
 * @s: input string
 *
 * Return: length of a given string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares characters of a string
 * @s: input string
 * @num1: smallest input iterating number
 * @num2: biggest input iterating number
 *
 * Return: .
 */

int comparator(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (1);
		return (0 + comparator(s, num1 + 1, num2 - 1));
	}
	return (0);
}

/**
 * is_palindrome -  returns 1 if a string is a palindrome
 *			and 0 if not
 * @s: input string
 *
 * Return: 1 if string is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
