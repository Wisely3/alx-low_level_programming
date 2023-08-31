#include "main.h"

/**
 * clear_bit - function that sets the value of a bit
 *		to 0 at a given index
 * @n: input number to be used
 * @index: the position to be cleared
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;

	if (*n & j)
		*n ^= j;

	return (1);
}
