#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list -  function that prints all the elements of a list_t list.
 * @h: the head
 * Return: the size of the list
 *
*/

size_t print_list(const list_t *h)
{
size_t i;
i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
i++;
}

return (i);
}
