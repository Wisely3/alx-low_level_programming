#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2
 *		dimensional array of integers
 * @width: parameter
 * @height: parameter
 *
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int **e;
	int a, b, c, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	e = malloc(height * sizeof(int *));

	if (e == NULL)
	{
		free(e);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		e[a] = malloc(width * sizeof(int));

		if (e[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(e[b]);
			}

			free(e);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			e[c][d] = 0;
		}
	}

	return (e);
}
