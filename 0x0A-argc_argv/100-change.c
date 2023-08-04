#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 *	to make change for an amount of money
 * @argc: the number of arguments passed
 * @argv: an array of pointers to the argument
 *
 * Return: 1 if number is not one, otherwise 0
 */

int main(int argc, char *argv[])
{
	int p, q = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	p = atoi(argv[1]);

	while (p > 0)
	{
		q++;
		if ((p - 25) >= 0)
		{
			p -= 25;
			continue;
		}
		if ((p - 10) >= 0)
		{
			p -= 10;
			continue;
		}
		if ((p - 5) >= 0)
		{
			p -= 5;
			continue;
		}
		if ((p - 2) >= 0)
		{
			p -= 2;
			continue;
		}
		p--;
	}

	printf("%d\n", q);
	return (0);
}
