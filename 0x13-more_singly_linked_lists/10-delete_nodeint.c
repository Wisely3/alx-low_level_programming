#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 *			at index of a listint_t linked list
 * @head: head of the list
 * @index: index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr_next, *ptr_temp;
	unsigned int j;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr_next = (*head)->next;
		free(*head);
		*head = ptr_next;
		return (1);
	}
	ptr_temp = *head;

	for (j = 0; j < index - 1; j++)
	{
		if (ptr_temp->next == NULL)
			return (-1);
		ptr_temp = ptr_temp->next;
	}

	ptr_next = ptr_temp->next;
	ptr_temp->next = ptr_next->next;
	free(ptr_next);
	return (1);

}
