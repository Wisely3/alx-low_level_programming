#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: an input value
 * @src: an input value
 * @n: an input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
		dest[a] = '\0';
	return (dest);
}
