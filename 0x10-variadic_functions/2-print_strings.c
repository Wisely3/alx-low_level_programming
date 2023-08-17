#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings followed by new line
*@separator: string to be printed between lines
*@n: number of strings to be passed
*...: the variable number of strings
*
*Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	va_list list;
	char *ptr;

	va_start(list, n);

	for (p = 0; p < n; p++)
	{
		ptr = va_arg(list, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (p != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
