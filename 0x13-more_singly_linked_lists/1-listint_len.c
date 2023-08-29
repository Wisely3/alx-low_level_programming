#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 *		in a linked listint_t list.*
 * @h: head pointer parameter
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		n_elements++;
	}
	return (n_elements);
}
