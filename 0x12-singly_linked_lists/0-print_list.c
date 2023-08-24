#include "lists.h"

/**
 * print_list - a function that prints all
 *		the elements of a list_t list.
 * @h: list of the elements to be printed
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t elements_n;

	elements_n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elements_n++;
	}
	return (elements_n);
}
