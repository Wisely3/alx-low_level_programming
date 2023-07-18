#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int b, p;

	for (p = 0; p <= 23; p++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar((p / 10) + 48);
			_putchar((p % 10) + 48);
			_putchar(':');
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar('\n');
		}
	}
}
