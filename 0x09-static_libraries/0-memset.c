#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: memory area
 * @b: char to copy
 * @n: the number of times for coping char b
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
