#include "main.h"

/**
 *set_bit - function that sets a bit to 1 at a given index
 *@n: unsigned long integer number
 *@index: unsigned integer index
 *
 *Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;
	*n = (*n | j);

	return (1);
}
