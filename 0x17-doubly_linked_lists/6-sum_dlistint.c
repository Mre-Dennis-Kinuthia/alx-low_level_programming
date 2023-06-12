#include "lists.h"

/**
 * sum_dlistint - sums up all the data(n) in a linked list
 * @head: beginning of linked list
 *
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
