#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a specified index in a
 *                         doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: A pointer to the node at the specified index, or NULL if the
 *         node is not found.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		i++;
		if (!(head->next))
			return (NULL);

		head = head->next;
	}

return (head);
}
