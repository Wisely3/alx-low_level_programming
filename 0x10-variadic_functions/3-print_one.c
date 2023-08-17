#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_char - a function that prints a character
* @arg: argument pointing to the character
*
* Return: void
*/

void print_char(va_list arg)
{
	char let;

	let = va_arg(arg, int);

	printf("%c", let);
}

/**
* print_int - a function that prints an integer
* @arg: arguments pointing to an integer
*
* Return: void
*/

void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);

	printf("%d", number);
}


/**
* print_float - function that prints a float
* @arg: argument pointing to float
*
* Return: void
*/

void print_float(va_list arg)
{
	float number;

	number = va_arg(arg, double);

	printf("%f", number);
}

/**
* print_string - function that prints a string
* @arg: argument pointing to string
*
* Return : void
*/

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
* print_all - function that  prints anything
* @format: format of the input parameter
*
* Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list args;


	int p = 0, q = 0;

	char *separator = "";

	printer_t funcs[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + p)))
	{
		q = 0;

		while (q < 4 && (*(format + p) != *(funcs[q].symbol)))
			q++;

		if (q < 4)
		{
			printf("%s", separator);
			funcs[q].print(args);
			separator = ", ";
		}

		p++;
	}

	printf("\n");

	va_end(args);
}
