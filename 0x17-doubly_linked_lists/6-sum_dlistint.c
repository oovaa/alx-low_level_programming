#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data (n) in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: sum of all the data values in the list, or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;


	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
