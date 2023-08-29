#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: head that points to the beginning of a list
 *
 * Return: address of the node where the loop starts, NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *final;

	first = head;
	final = head;

	while (head && final && final->next)
	{
		head = head->next;
		final = final->next->next;

		if (head == final)
		{
			head = first;
			first =  final;
			while (1)
			{
			final = first;
			while (final->next != head && final->next != first)
			{
				final = final->next;
			}
			if (final->next == head)
				break;

			head = head->next;
			}
			return (final->next);
		}
	}

	return (NULL);
}
