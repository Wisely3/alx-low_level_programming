#include "main.h"
#include <stdio.h>

/**
 * main - Entry level
 *
 *Description: finds and prints the sum
 *		of the even-valued terms, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, s;
	float  total_s;

	while (1)
	{
		s = f1 + f2;

		if (s > 4000000)
			break;

		if ((s % 2) == 0)
			total_s += s;

		f1 = f2;
		f2 = s;
	}
	printf("%.0f\n", total_s);

	return (0);
}
