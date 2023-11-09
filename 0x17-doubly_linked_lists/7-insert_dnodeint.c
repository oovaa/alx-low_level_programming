#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

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
	dlistint_t *new, *next, *cur;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		cur = *h;
		for (i = 0; i < idx - 1 && cur != NULL; i++)
			cur = cur->next;
		if (cur == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = cur;
		next = cur->next;
		cur->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
