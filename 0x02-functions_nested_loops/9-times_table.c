#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;

			/*
			 * put space if product is a single number
			 * place first digit if its two numbers
			 */
			if (c <= 9)
				_putchar(' ');
			else
				_putchar((c / 10) + 48); /*get the first digit*/

			_putchar((c % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
