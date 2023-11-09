#include "lists.h"

/**
 * free_dlistint - free a linked list
 * @head: thehead
 *
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nxt = head->next;

	while (nxt)
	{
		nxt = head->next;
		free(head);
		head = nxt;
	}
}
