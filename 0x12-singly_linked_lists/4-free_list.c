#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: the head of the list
 *
*/


void free_list(list_t *head)
{
list_t *cur;

if (!head)
return;

cur = head;
while (cur != NULL)
{
if (cur)
free(cur);
if (cur->str)
free(cur->str);

cur = cur->next;
}
free(head);
}
