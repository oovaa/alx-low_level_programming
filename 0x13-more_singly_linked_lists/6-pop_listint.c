#include "lists.h"
#include <stdlib.h>

/**
 * pop_listcint - unction that deletes the head node of a listint_t linked list
 * @head: the head of the linked list
 * Return: if the linked list is empty return 0 or
 *  returns the head node’s data (n).
 *
*/

int pop_listcint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}

