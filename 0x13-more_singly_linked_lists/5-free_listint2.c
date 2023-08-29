#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: head of the list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr_temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr_temp = (*head)->next;
		free(*head);
		*head = ptr_temp;
	}
}
