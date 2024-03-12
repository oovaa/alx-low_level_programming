#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted
 * array using Interpolation search algorithm.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: Index of the value in the array, or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int heigh = size - 1, low = 0, prob;

	if (!array)
		return (-1);

	while (low <= heigh)
	{
		if (low == heigh)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%d] = [%d]\n", low, array[low]);
				return (low);
			}
			break;
		}

		prob = low + ((double)(heigh - low) /
					  (array[heigh] - array[low])) *
						 (value - array[low]);

		if (value > array[heigh])
		{
			printf("Value checked array[%d] is out of range\n", prob);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", prob, array[prob]);

		if (array[prob] == value)
			return (prob);
		else if (array[prob] > value)
			heigh = prob - 1;
		else
			low = prob + 1;
	}

	return (-1);
}
