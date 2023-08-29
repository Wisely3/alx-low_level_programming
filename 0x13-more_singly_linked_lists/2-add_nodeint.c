#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - a function that adds a new node
 *		at the beginning of a listint_t list
 * @head: head of the double pointer
 * @n: integer that adds the list
 *
 * Return: address of the new element, NULL if failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr_new;

	if (head == NULL)
		return (NULL);

	ptr_new = malloc(sizeof(listint_t));

	if (ptr_new == NULL)
		return (NULL);

	ptr_new->n = n;
	ptr_new->next = *head;
	*head = ptr_new;

	return (ptr_new);
}
