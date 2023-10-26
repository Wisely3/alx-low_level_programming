#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @index: Index from 0 of the bit you want to set.
 * @n: Number to be used
 *
 * Return: 1 if success, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	*n = (*n | num);

	return (1);
}
