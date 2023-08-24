#include "lists.h"

/**
 * list_len - a function that returns then
 *		number of elements in a list
 * @h: singly linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num_elements;

	num_elements = 0;
	while (h != NULL)
	{
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}
