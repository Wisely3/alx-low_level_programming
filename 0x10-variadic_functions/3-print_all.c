#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: list of arguments passed
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	char *string, *seperator = "";
	int p = 0;
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[p])
		{
		switch (format[p])
		{
			case 'c':
			printf("%s%c", seperator, va_arg(list, int));
			break;
			case 'i':
			printf("%s%d", seperator, va_arg(list, int));
			break;
			case 'f':
			printf("%s%f", seperator, va_arg(list, double));
			break;
			case 's':
			string = va_arg(list, char *);
			if (!string)
			string = "(nil)";
			printf("%s%s", seperator, string);
			break;
			default:
			p++;
			continue;
		}
		seperator = ", ";
		p++;
		}
	}

	printf("\n");
	va_end(list);
}
