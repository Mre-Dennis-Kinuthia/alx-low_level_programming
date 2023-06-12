#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: pointer to pointer to head of list
 * @n: integer data in new node
 *
 * Return: address of new node, NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
		new->prev = temp;
	}

	return (new);
}
