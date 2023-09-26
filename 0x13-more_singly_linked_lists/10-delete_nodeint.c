#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tem;
unsigned int i;


if (index == 0)
{
*head = (*head)->next;
return (1);
}

tem = *head;

for (i = 0; i < index - 1; i++)
{
if (tem == NULL)
return (-1);

tem = tem->next;
}
tem->next = tem->next->next;

return (1);
}


