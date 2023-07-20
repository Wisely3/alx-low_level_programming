#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the largest prime factor
 *	of the number 612852475143  followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int a;
	unsigned long int n = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
		while ((n % 1 == 0) && (n != a))
			n = n / a;
	}
	printf("%ld\n", n);
	return (0);
}
