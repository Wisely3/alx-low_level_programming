#include "main.h"

/**
 * swap_int - swaps the values of two integer
 * @a: interger to swap
 * @b: interger to swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
