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

	while (value > array[low] && value < array[heigh] && low <= heigh)
	{
		prob = low + (heigh - low) * (value - array[low]) /
						 (array[heigh] - array[low]);

		printf("Value checked array[%d] = [%d]\n", prob, array[prob]);

		if (array[prob] == value)
			return (prob);
		else if (array[prob] > value)
			heigh = prob - 1;
		else
			low = prob + 1;
	}

	if (low <= heigh)
		printf("Value checked array[%d] = [%d]\n", prob, array[prob]);

	if (prob > heigh)
		printf("Value checked array[%d] is out of range\n", prob);

	return (-1);
}