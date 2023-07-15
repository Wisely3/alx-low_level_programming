#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 *
 * Retain: Almost 0 (Success)
 */
int main(void) 
{
	int m, n;

	for (m = 0; m < 9; m++)
	{
		for (n = m + 1; n < 10; n++)
		{
			putchar((m % 10) + '0');
			putchar((n % 10) + '0');

			if (m == 8 && n == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
