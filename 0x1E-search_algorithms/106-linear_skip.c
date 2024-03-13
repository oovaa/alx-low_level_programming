#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list.
 * @value: The value to search for.
 *
 * Return: Pointer to the node with the value, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = list, *prev = list;

	if (!list)
		return (NULL);

	while (temp && temp->n < value)
	{
		prev = temp;
		if (temp->express)
		{
			temp = temp->express;
			printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		}
		else
		{
			while (temp->next)
				temp = temp->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   prev->index, temp->index);

	while (prev && prev->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}

	while (prev)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
