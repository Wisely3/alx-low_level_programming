#include "main.h"

/**
 * rev_string - reverses a string
 * @n: input number
 * Return: void
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i++;

	for (j = 0; j < i; j++, i++)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}
/**
 * infinite_add - adds two numbers
 * @n1: input number
 * @n2: input number
 * @r: buffer for storing the result
 * @size_r: buffer size
 * Return: buffer r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || f == 1)
	{
		if (i < 0)
			k = 0;
		else
			k = *(n1 + i) - '0';
		if (j < 0)
			l = 0;
		else
			l = *(n2 + j) - '0';
		s = k + l + f;
		if (s >= 10)
			f = 1;
		else
			f = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (s % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	return (r);
}
