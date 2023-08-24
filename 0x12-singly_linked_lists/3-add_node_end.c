#include "lists.h"

/**
 * add_node_end - a function that adds a new
 *		node at the end of a list_t list
 * @head: head of linked list
 * @str: string to be stored
 *
 * Return: head address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_one, *jj;
	size_t numchar;

	new_one = malloc(sizeof(list_t));
	if (new_one == NULL)
		return (NULL);

	new_one->str = strdup(str);

	for (numchar = 0; str[numchar]; numchar++)
		;

	new_one->len = numchar;
	new_one->next = NULL;
	jj = *head;

	if (jj == NULL)
	{
		*head = new_one;
	}
	else
	{
		while (jj->next != NULL)
			jj = jj->next;
		jj->next = new_one;
	}

	return (*head);
}

