#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: head of freed list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *new_one;

	while ((new_one = head) != NULL)
	{
		head = head->next;
		free(new_one->str);
		free(new_one);
	}
}
