#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (m <= 122)
	{
		putchar(m);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		n++;
	}
	putchar('\n');
	return (0);
}
