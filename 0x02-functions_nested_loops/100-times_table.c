#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: takes input number
 */

void print_times_table(int n)
{
	int c, b, a;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				c = a * b;

				if (c <= 9)
					_putchar(' ');
				if (c <= 99)
					_putchar(' ');

				if (c >= 100)
				{
					_putchar((c / 100) + 48);
					_putchar((c / 10) % 10 + 48);
				} else if (c <= 99 && c >= 10)
					_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
