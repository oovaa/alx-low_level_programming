#include "search_algos.h"

/**
 * parr - a function that prints an array of integers
 * @s: the starting index of the array to print from
 * @e: the ending index of the array to print to
 * @arr: a pointer to the first element of the array to print
 * This function prints the elements of the array from index 's' to 'e'
 **/

void parr(int s, int e, int *arr)
{
	printf("Searching in array: ");
	for (; s < e; s++)
	{
		printf("%d, ", arr[s]);
	}
	printf("%d\n", arr[s]);
}

/**
 * advanced_binary_helper - Helper function for performing advanced
 * binary search on an array.
 *
 * @array: Pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for in the array.
 * @start_index: The starting index of the subarray to search in.
 *
 * Return: The index of the first occurrence of @value in the array,
 *  or -1 if not found.
 */
int advanced_binary_helper(int *array, size_t size, int value, int start_index)
{
	int mid;

	if (size == 0)
		return (-1);

	mid = (size - 1) / 2;
	parr(0, size - 1, array);

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] < value)
			return (start_index + mid);
		size = mid + 1;
	}
	else if (array[mid] < value)
	{
		array += mid + 1;
		start_index += mid + 1;
		size -= mid + 1;
	}
	else
		size = mid + 1;

	return (advanced_binary_helper(array, size, value, start_index));
}

/**
 * advanced_binary - a function that searches
 *  for a value in an array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is
 *  located, or -1 if value is not present
 * in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	return (advanced_binary_helper(array, size, value, 0));
}
