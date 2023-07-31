#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 *		of a square matrix of integers
 * @a: matrix of integers to be printed
 * @size: size of the matrix to be printed
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int j, p = 0, q = 0;

	for (j = 0; j < size; j++)
	{
		p += a[j];
		a += size;
	}

	a -= size;

	for (j = 0; j < size; j++)
	{
		q += a[j];
		a -= size;
	}

	printf("%d, %d\n", p, q);
}
