#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 *			node at a given position
 * @head: head of a list
 * @idx: index of the node
 * @n: new value of the node
 *
 * Return: the address of new node, otherwise NULL if failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *ptr_new, *ptr_temp;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		ptr_temp = *head;
		for (j = 0; j < idx - 1 && ptr_temp != NULL; j++)
		{
			ptr_temp = ptr_temp->next;
		}
		if (ptr_temp == NULL)
			return (NULL);
	}

	ptr_new = malloc(sizeof(listint_t));

	if (ptr_new == NULL)
		return (NULL);
	ptr_new->n = n;

	if (idx == 0)
	{
		ptr_new->next = *head;
		*head = ptr_new;
		return (ptr_new);
	}

	ptr_new->next = ptr_temp->next;
	ptr_temp->next = ptr_new;
	return (ptr_new);
}
