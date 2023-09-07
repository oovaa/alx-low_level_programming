#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *re;
if (size == 0 || nmemb == 0)
return (NULL);

re = malloc(nmemb * size);

if (re == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
re[i] = 0;

return (re);
}
