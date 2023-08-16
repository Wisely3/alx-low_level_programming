#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *@array: array of numbers
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used
 *
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int q;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (q = 0; q < size; q++)
	{
		if (cmp(array[q]))
		return (q);
	}
	return (-1);
}
