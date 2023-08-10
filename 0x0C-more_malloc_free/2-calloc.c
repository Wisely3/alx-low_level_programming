#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array
 *		using malloc
 * @nmemb: the number of elements
 * @size: the size of bytes
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int j = 0, num_size = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	num_size = nmemb * size;
	ptr = malloc(num_size);

	if (ptr == NULL)
		return (NULL);

	while (j < num_size)
	{
		ptr[j] = 0;
		j++;
	}

	return (ptr);
}
