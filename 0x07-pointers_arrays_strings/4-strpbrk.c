#include "main.h"
#include <stddef.h>


/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: targeted string
 * @accept: characters that are accepted
 * Return: pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
int i = 0;
while (*s)
{
i = 0;
while (accept[i])
{
if (*s == accept[i])
{
return (s);
}
i++;
}
s++;
}
return (NULL);
}
