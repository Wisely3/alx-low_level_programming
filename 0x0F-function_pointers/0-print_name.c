#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints the name using a pointer
 *		to the given function_pointers
 * @name: name of the string to be added
 * @f: a pointer to a given function_pointers
 *
 *Return: void
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
