#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: the head of the linked list
 * @index: the index
 * Return: the node or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *t;
*t  = *head;
int i;
i = 0;
while (t != NULL && i < index)
{
i++;
t = t->next;
}

return (t == NULL ? NULL : t);
}

