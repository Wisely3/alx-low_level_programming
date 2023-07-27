#include "main.h"

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
}

/**
 * add_strings - adds numbers in strings
 * @n1: input number
 * @n2: input number
 * @r: buffer for storing the result
 * @r_index: index of the buffer
 * Return: r, otherwise 0
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int d, p = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		d = (*n1 - '0') + (*n2 - '0');
		d += p;
		*(r + r_index) = (d % 10) + '0';
		p = d / 10;
	}

	for (; *n1; n1--; r_index++)
	{
		d = *(n1 - '0') + p;
		*(r + r_index) = (d % 10) + '0';
		p = d / 10;
	}

	for (; *n2; n2--; r_index--)
	{
		d = (*n2 - '0') + p;
		*(r + r_index) = (d % 10) + '0';
		p = d / 10;
	}
}
