#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{

int **grid, i, j;

if (width == 0 || height == 0)
return (NULL);

grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = (int *)calloc(width, sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[i]);

return (NULL);
}
}

return (grid);
}
