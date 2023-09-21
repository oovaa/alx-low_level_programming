#include "lists.h"

/**
 * list_len -  function that returns the number of
 * elements in a linked list_t list.
 * @h: number of elements
 * Return: the number of elelments
*/

size_t list_len(const list_t *h)
{
size_t i;
i = 0;

while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
