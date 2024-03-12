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
 * binary_search - a function that searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is
 *  located, or -1 if value is not present
 * in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, start = 0, end = (int)size - 1;

	while (start <= end)
	{
		parr(start, end, array);
		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
