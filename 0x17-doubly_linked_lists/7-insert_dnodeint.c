#include "lists.h"

/**
 * insert_dnodeint_at_index - returns the nth node of a doubly linked list
 * @h: pointer to pointer to head of list
 * @idx: index of node in linked list
 * @n: integer data of node at idx
 *
 * Return: address of new node, NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	unsigned int i = 1;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (temp != NULL && i < idx)
	{
		i++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	if (temp->next == NULL)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	if (i == idx)
	{
		new = malloc(sizeof(dlistint_t));
		if (new != NULL)
		{
			new->n = n;
			new->prev = temp->prev;
			new->next = temp;
			temp->prev = new;
			new->prev->next = new;
			return (new);
		}
	}
	return (NULL);
}
