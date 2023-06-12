#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: beginning of linked list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
