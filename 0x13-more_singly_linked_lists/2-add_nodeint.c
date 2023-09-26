#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: the head of the node
 * @n:new nod's n
 * Return: address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nnode = malloc(sizeof(listint_t));

if (nnode == NULL)
return (NULL);

nnode->n = n;


nnode->next = *head;
*head = nnode;

return (nnode);
}

