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
*cur = *head;
while (cur != NULL)
{
free(cur->str);
free(cur);
cur = cur->next;
}
free(head);
}
