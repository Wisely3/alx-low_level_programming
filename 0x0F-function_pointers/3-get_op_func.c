#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
  * get_op_func - selects the correct function to perform
  *					the operation asked by the user
  * @s: operator passed as argument to the program
  *
  * Return: pointer to the function that corresponds to the operator
  */
  
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	
	int a = 0;

	while (a < 5)
	{
		if (strcmp(s, ops[a].op) == 0)
			return (ops[a].f);

		a++;
	}

	return (0);
}
