#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * natural - computes and prints the sum of all the multiples
 *	of 3 or 5 below 1024 (excluded)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, a;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			c += a;
	}
	printf("%d\n", c);

	return (0);
}
