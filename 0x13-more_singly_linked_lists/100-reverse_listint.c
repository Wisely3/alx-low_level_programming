#include "lists.h"

/**
 * reverse_listint - a function that reverses
 *		a listint_t linked list
 * @head: head of the list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr_first, *ptr_final;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	ptr_first = NULL;

	while (*head != NULL)
	{
		ptr_final = (*head)->next;
		(*head)->next = ptr_first;
		ptr_first = *head;
		*head = ptr_final;
	}

	*head = ptr_first;
	return (*head);
}
