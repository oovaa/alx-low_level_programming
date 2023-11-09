#include "lists.h"



/**
 * delete_dnodeint_at_index - Deletes the node at a specified index in a
 *							doubly linked list.
 * @head: A pointer to the address of the head of the doubly linked list.
 * @index: The index of the node to be deleted (starting from 0).
 *
 * Return: 1 if the node is successfully deleted, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cur;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	cur = *head;
	while (i < index)
	{
		i++;
		cur = cur->next;
		if (cur == NULL)
			return (-1);
	}

	if (cur->next)
		cur->next->prev = cur->prev;

	if (cur->prev)
		cur->prev->next = cur->next;

	cur->next = NULL;
	cur->prev = NULL;

	return (1);
}
