#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 *			node of a listint_t linked list
 * @head: head of the list
 * @index: index of the node
 *
 * Return: nth node, otherwise NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);

	for (j = 0; j < index; j++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
