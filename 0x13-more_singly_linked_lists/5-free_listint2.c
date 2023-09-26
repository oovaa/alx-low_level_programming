#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: the head of the list
 *
 * Return: NULL if error
 */

void free_listint2(listint_t **head)
{
	listint_t *next, *t;

	t = *head;


	while (t != NULL)
	{
		next = t->next;
		free(t);
		t = next;
	}

*head = NULL;
}
