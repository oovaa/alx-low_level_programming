#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the head
 * Return: the number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
	++i;
	printf("%d\n", h->n);
	h = h->next;
	}
	return (i);
}
