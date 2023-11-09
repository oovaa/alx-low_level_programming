#include "lists.h"


/**
 * add_dnodeint_end - dds a new node at the end of a dlistint_t list.
 * @head: the head
 * @n: the values stored in the node
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *cur = *head;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
		{
	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head)
		(*head)->prev = newnode;

	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
	}

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;

	while (cur->next)
		cur = cur->next;

	newnode->prev = cur;
	newnode->next = NULL;
	cur->next = newnode;

	return (newnode);
}
