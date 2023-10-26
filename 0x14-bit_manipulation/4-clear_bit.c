#include "main.h"

/**
 * clear_bit - Function that clear the value of a bit to 1 at a given index
 * @index: Index from 0 of the bit you want to set
 * @n: Input number
 *
 * Return: 1 if uccess, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;

	if (*n & num)
		*n ^= num;

	return (1);
}
