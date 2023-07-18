#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *	followed by a new line
 *
 * @n: input number
 */

void print_to_98(int n)
{
	int m;

	if (n > 98)
		for (m = n; m > 98; m--)
			printf("%d, ", m);
	else
		for (m = n; m < 98; m++)
			printf("%d, ", m);
	printf("98\n");
}
