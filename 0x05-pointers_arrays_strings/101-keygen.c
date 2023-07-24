#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	int pw[100];
	int a, sum, m;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pw[a] = rand() % 78;
		sum += (pw[a] + '0');
		putchar(pw[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			m = 2772 - sum - '0';
			sum += m;
			putchar(m + '0');
			break;
		}
	}
	return (0);
}
