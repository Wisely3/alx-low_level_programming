#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0, index = 0;
	char temp;

	while (s[index++])
		a++;

	for (index = a - 1; index >= a / 2; index--)
	{
		temp = s[index];
		s[index] = s[a - index - 1];
		s[a - index - 1] = temp;
	}
}
