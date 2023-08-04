#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the count of the argument
 * @argv: the vector of the argument
 *
 * Return: Always 0 if success
 */

int main(int argc, char *argv[])
{
	int p = 0, q = 0;

	if (argc == 3)
	{
		p = atoi(argv[1]);
		q = atoi(argv[2]);
		printf("%d\n", p * q);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
