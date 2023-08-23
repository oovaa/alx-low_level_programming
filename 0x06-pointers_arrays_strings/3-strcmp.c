#include "main.h"
#include <stdio.h>
/**
 * _strcmp - a function that compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if strings are the same 1 if not
*/

int _strcmp(char *s1, char *s2)
{
int ans = 0;
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}

return (ans);
}
