#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * nlength - returns the length of string
 *
 * @n: operand number
 *
 * Return: number of digits
 */

int nlength(int n)
{
	int length = 0;

	if (!n)
		return (1);

	while (n)
	{
		n = n / 10;
		length += 1;
	}

	return (length);
}
/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, i0s;
	unsigned long f1 = 1, f2 = 2, s, mx = 100000000, f1o = 0, f2o = 0, so = 0;

	for (c = 1; c <= 98; c++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		i0s = nlength(mx) - 1 - nlength(f1);

		while (f1o > 0 && i0s > 0)
		{
			printf("%d", 0);
			i0s--;
		}

		printf("%lu", f1);

		s = (f1 + f2) % mx;
		so = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = s;
		f2o = so;

		if (c != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
