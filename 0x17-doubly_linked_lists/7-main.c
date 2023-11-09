#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    /*  Case 1: Insert at the end */
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);

/*     Case 2: Insert at the beginning*/ 
	head = NULL;
    insert_dnodeint_at_index(&head, 0, 42);
    print_dlistint(head);
    free_dlistint(head);

   /*  Case 3: Insert at index 1 */
    head = NULL;
    add_dnodeint_end(&head, 10);
    insert_dnodeint_at_index(&head, 1, 20);
    print_dlistint(head);
    free_dlistint(head);

    /* Case 4: Insert at index 0 in a non-empty list */
    head = NULL;
    add_dnodeint_end(&head, 50);
    insert_dnodeint_at_index(&head, 0, 30);
    print_dlistint(head);
    free_dlistint(head);

    /* Case 5: Insert at an invalid index */
    head = NULL;
    insert_dnodeint_at_index(&head, 5, 100);  /* Index out of range */
    print_dlistint(head);
    free_dlistint(head);

    return (EXIT_SUCCESS);
}
