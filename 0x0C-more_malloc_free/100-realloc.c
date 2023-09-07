#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size:is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer allocate new size memory, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int min = (new_size < old_size) ? new_size : old_size, i;
char *p;
char *ptr2 = ptr;


if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);

p = malloc(new_size);
if (p == NULL)
return (NULL);


for (i = 0; i < min; i++)
p[i] = ptr2[i];

free(ptr);
return (p);
}
