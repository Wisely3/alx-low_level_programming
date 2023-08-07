#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 *		initializes it with a specific char
 * @size: size of the array
 * @c:  char in the array
 *
 * Return: NULL if size is 0, pointer to array if failure
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
