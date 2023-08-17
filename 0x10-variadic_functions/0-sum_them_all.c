#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its paramters
 * @n: the number of paramters
 * @...: variable number for calculating the sum of parameters
 *
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int p, result = 0;
	va_list list;

	va_start(list, n);

	for (p = 0; p < n; p++)
		result += va_arg(list, int);

	va_end(list);

	return (result);
}
