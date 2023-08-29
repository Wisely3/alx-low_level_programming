#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: header of the list
 *
 *Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return (0);

	ptr = *head;

	*head = ptr->next;
	hnode = ptr->n;
	free(ptr);

	return (hnode);
}
