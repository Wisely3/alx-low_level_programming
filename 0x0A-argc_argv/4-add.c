#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int p;
	unsigned int b, sum = 0;
	char *d;

	if (argc > 1)
	{
		for (p = 1; p < argc; p++)
		{
			d = argv[p];

			for (b = 0; b < strlen(d); b++)
			{
				if (d[b] < 48 || d[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(d);
			d++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
