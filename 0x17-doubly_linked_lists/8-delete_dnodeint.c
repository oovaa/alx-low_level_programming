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

	cur = *head;
	if (index == 0)
	{
		*head = cur->next;
		if (cur->next != NULL)
			cur->next->prev = NULL;
		free(cur);
		return (1);
	}
	while (i < index)
	{
		i++;
		cur = cur->next;
		if (cur == NULL)
			return (-1);
	}

	cur->prev->next = cur->next;
	if (cur->next != NULL)
		cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
