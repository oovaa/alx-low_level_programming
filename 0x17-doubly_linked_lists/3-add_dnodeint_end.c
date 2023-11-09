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
		return (add_first(head, n));

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

/**
 * add_first - Adds a new node at the beginning of a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 */

dlistint_t *add_first(dlistint_t **head, const int n)
{

	dlistint_t *newnode = malloc(sizeof(dlistint_t));

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
