#include "lists.h"

/**
 * _ra - a function that reallocates memory for an array
 *	of pointers to the nodes in a linked list
 * @list: list to append
 * @size: size of the new list
 * @new: new node to be added to the list
 *
 * Return: pointer to the new list
 */

listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	size_t nnodes;
	listint_t **new_list;

	new_list = malloc(size * sizeof(listint_t *));

	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}

	for (nnodes = 0; nnodes < size - 1; nnodes++)
		new_list[nnodes] = list[nnodes];
	new_list[nnodes] = new;
	free(list);
	return (new_list);
}

/**
 * free_listint_safe - a function that frees a listint_t linked list
 * @head: head of the list
 *
 * Return: the number of nodes in the list
 */

size_t free_listint_safe(listint_t **head)
{
	size_t nnodes, number = 0;
	listint_t *ptr_next;
	listint_t **ptr_list = NULL;

	if (head == NULL || *head == NULL)
		return (number);

	while (*head != NULL)
	{
		for (nnodes = 0; nnodes < number; nnodes++)
		{
			if (*head == ptr_list[nnodes])
			{
				*head = NULL;
				free(ptr_list);
				return (number);
			}
		}
		number++;
		ptr_list = _ra(ptr_list, number, *head);
		ptr_next = (*head)->next;
		free(*head);
		*head = ptr_next;
	}
	free(ptr_list);
	return (number);
}
