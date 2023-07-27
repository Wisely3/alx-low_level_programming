#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: number of bytes
 * @size: size of the byte
 */

void print_buffer(char *b, int size)
{
	int d, q, p;

	d = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (d < size)
	{
		q = size - d < 10 ? size - d : 10;
		printf("%08x: ", d);
		for (p = 0; p < 10; p++)
		{
			if (p < q)
				printf("%02x", *(b + d + p));
			else
				printf("  ");
			if (p % 2)
			{
				printf(" ");
			}
		}
		for (p = 0; p < q; p++)
		{
			int c = *(b + d + p);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		d += 10;
	}
}


