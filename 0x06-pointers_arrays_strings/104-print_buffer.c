#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: number of bytes
 * @size: size of the byte
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int p = 0, q;

	if (size < 0)
	{
		printf("\n");
		return;
	}
	while (p < size)
	{
		if (p % 10 == 0)
			printf("%08x: ", p);
		for (q = p; q < p + 9; q += 2)
		{
			if ((q < size) && ((q + 1) < size))
				printf("%02x%02x: ", b[q], b[q + 1]);
			else
			{
				while (++q <= p + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (q = p; q < p + 9 && q < size; q++)
		{
			if (b[q] >= 32 && b[q] <= 126)
				printf("%c", b[q]);
			else
				printf(".");
		}
		printf("\n");
		p += 10;
	}
}


