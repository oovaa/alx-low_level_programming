#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{

int *arr, h = min, i;

if (min > max)
return (NULL);

arr = malloc((max - min) * sizeof(int));
if (arr == NULL)
return (NULL);

for (i = 0; i < max - min; h++, i++)
arr[i] = h;

return (arr);
}
