#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list using the
 *             Jump search algorithm.
 *
 * @list: Pointer to the head of the linked list.
 * @size: The number of nodes in the linked list.
 * @value: The value to search for in the linked list.
 *
 * Return: If the value is found, return a pointer to the node containing the
 *         value. Otherwise, return NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step = sqrt(size), i, j;
	listint_t *temp = list, *result = list;

	if (!list)
		return (NULL);

	for (i = 0; i <= (int)size; i++)
	{
		result = temp;
		for (j = 0; j < step; j++)
		{
			if (!temp->next)
				break;
			temp = temp->next;
		}

		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);

		if (!temp || temp->n >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
				   result->index, temp->index);
			while (result != temp->next)
			{
				printf("Value checked at index [%ld] = [%d]\n", result->index, result->n);
				if (result->n == value)
					return (result);
				result = result->next;
				if (!result)
					return (NULL);
			}
			if (!temp)
				return (NULL);
		}

		if (!temp->next)
			break;
	}

	return (NULL);
}
