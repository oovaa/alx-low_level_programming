#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted
 * array using Jump search algorithm.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: Index of the value in the array, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size), start = 0, end = start + step, i;

	if (!array)
		return (-1);

	for (; start < (int)size; end += step, start += step)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);

		if (end >= (int)size || array[end] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", start, end);
			if (end >= (int)size)
				end = size - 1;
			for (i = start; i <= end; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			break;
		}
	}

	return (-1);
}
