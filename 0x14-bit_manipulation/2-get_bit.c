#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @index: Index from 0 of the bit you want to get
 * @n: Bit value in the given index
 *
 * Return: The value of the bit at index, -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
