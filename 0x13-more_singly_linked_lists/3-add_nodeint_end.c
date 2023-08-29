#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node
 *		at the end of a listint_t list
 * @head: head of the double pointer
 * @n: integer value that adds the list
 *
 * Return: address of the new element, NULL if failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr_new;
	listint_t *ptr_temp;

	if (head == NULL)
		return (NULL);

	ptr_new = malloc(sizeof(listint_t));

	if (ptr_new == NULL)
		return (NULL);

	ptr_new->n = n;
	ptr_new->next = NULL;

	if (*head == NULL)
	{
		*head = ptr_new;
		return (ptr_new);
	}

	ptr_temp = *head;

	while (ptr_temp->next != NULL)
	{
		ptr_temp = ptr_temp->next;
	}

	ptr_temp->next = ptr_new;

	return (ptr_new);
}
