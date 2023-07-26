#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: an array
 * @n: the number of elements in the array
 *
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int c, d;

	for (c = 0; c < n; c++)
	{
		n--;
		d = a[c];
		a[c] = a[n];
		a[n] = d;
	}
}
