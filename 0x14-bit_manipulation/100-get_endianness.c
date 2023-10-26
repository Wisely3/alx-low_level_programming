#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 if big endian, 1 if endian is small
 */

int get_endianness(void)
{
	unsigned int test;
	char *endian;

	test = 1;
	endian = (char *) &test;

	return ((int)*endian);
}
