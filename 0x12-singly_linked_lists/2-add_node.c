#include "lists.h"

/**
 * add_node - a function that adds a new node at
 *              the beginning of a list_t list
 * @head: head for linked list
 * @str: string to be stored
 *
 * Return: head address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_one;
	size_t numchar;

	new_one = malloc(sizeof(list_t));
	if (new_one == NULL)
		return (NULL);

	new_one->str = strdup(str);

	for (numchar = 0; str[numchar]; numchar++)
		;

	new_one->len = numchar;
	new_one->next = *head;
	*head = new_one;

	return (*head);
}
