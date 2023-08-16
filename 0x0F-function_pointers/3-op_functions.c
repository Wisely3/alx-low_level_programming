#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add -  returns the sum of a and b
 * @a: input value
 * @b: input value
 *
 * Return: sum of two input values
 */
  
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two input values
 * @a: input value a
 * @b: input value b
 *
 * Return: difference of two input values
 */
  
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the produuct of two values
 * @a: input value
 * @b: input value
 *
 * Return: product of two values
 */
  
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: input value a
 * @b: input value b
 *
 * Return: result of the division of a by b
 */
  
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: input value a
 * @b: input value b
 *
 * Return: remainder of the division of a by b
 */
  
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
