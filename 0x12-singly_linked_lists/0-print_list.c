#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - a function that prints all
 *		the elements of a list_t list.
 * @h: list of the elements to be printed
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int new_number = 0;

	while (h)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");

		else

			printf("[%d] %s\n", h->len, h->str);

		new_number++;
		h = h->next;
	}
	return (new_number);
}
