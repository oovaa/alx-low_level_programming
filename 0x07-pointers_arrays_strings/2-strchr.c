#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: the string containing the character
 * @c: the character
 * Return: a pointer to the first occurrence of the character c
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}


return (NULL);
}
