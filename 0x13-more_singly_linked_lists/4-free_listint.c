#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list
 * @head: head of the list
 *
 * Return: Nothing,  NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *ptr_temp;

	while (head != NULL)
	{
		ptr_temp = head->next;
		free(head);
		head = ptr_temp;
	}
}
