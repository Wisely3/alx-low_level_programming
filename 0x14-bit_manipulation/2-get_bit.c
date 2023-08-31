#include "main.h"

/**
 *get_bit - function that returns the value of a bit
 *	 at the given index
 *@n: unsigned long integer value
 *@index: unsigned integer index of the bit
 *
 *Return: The value of the bit, and -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
