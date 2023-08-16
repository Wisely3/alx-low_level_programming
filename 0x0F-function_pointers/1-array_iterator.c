#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - it prints each array element on a new line
 * @array: the array parametor to be printed
 * @size: the number of elements to be printed
 * @action: a pointer pointing the array elements to be printed
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
