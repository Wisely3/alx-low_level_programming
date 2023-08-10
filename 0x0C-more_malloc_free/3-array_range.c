#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ar;
	int j, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	ar = malloc(length * sizeof(int));

	if (!ar)
		return (NULL);

	for (j = 0; j < length; j++)
		ar[j] = min++;

	return (ar);
}
