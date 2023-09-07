#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: size of memory to allcoate
 * Return: void
*/

void *malloc_checked(unsigned int b)
{
void *arr;
arr = malloc(b);
if (arr == NULL)
exit(98);

return (arr);
}
