#include "lists.h"

/**
 * _r - a function that reallocates memory for an array
 *	of pointers to the nodes in a linked list
 * @list: list to be appended
 * @size: size of the new list
 * @new: new node to add to the list
 *
 * Return: a pointer to new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	size_t nnodes;
	const listint_t **new_list;

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
 * print_listint_safe - a function that prints a
 *		listint_t linked list
 * @head: head of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes, number = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
	for (nnodes = 0; nnodes < number; nnodes++)
	{
	if (head == list[nnodes])
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		free(list);
		return (number);
	}
	}
	number++;
	list = _r(list, number, head);
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}

	free(list);
	return (number);
}
