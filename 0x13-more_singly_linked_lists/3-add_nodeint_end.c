#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds new node at the end of a list.
 * @head: head of the list
 * @n: content of the new node
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nnode = malloc(sizeof(listint_t));
listint_t *tem = malloc(sizeof(listint_t));

if (nnode == NULL)
return (NULL);

nnode->n = n;

if (*head == NULL)
*head = nnode;

else
{
tem = *head;

while (tem->next != NULL)
tem = tem->next;

tem->next = nnode;
}
return (nnode);
}


