#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - function that prints numbers
*		new line followed by
*@separator: the string to be printed between numbers
*@n: the number of integer to be passed
*@...: variable number
*
*Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	va_list list;

	va_start(list, n);

	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(list, int));

		if (p != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
