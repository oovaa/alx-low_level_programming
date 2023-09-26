#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  function that inserts a
 *  new node at a given position.
 * @head: the head of a linked list
 * @idx: the index the insert in
 * @n: node's date
 * Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode, *tem = *head;
unsigned int i;
newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);
newNode->n = n;

if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}


for (i = 0; i < idx - 1; i++)
{
if (tem == NULL)
return (NULL);
tem = tem->next;
}

newNode->next = tem->next;
tem->next = newNode;

return (newNode);
}
