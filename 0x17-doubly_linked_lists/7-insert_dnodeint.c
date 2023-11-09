#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node with a given value at a
 *	specified index in a doubly linked list.
 * @h: A pointer to the address of the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted (starting from 0).
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly inserted node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newnode, *cur;

	if (h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	cur = *h;

	while (i < idx && cur)
	{
		cur = cur->next;
		i++;
	}

	if (i != idx || cur == NULL)
		return (NULL);

	newnode->prev = cur->prev;
	newnode->next = cur;

	if (cur->prev)
		cur->prev->next = newnode;
	else
		*h = newnode;

	cur->prev = newnode;

	return (newnode);
}
