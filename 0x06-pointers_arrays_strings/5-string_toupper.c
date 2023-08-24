#include "main.h"
/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @c: pointer to the string
 * Return: the string to upercase
 *
*/


char *string_toupper(char *c)
{
char *re = c;
while (*c)
{
if (*c >= 'a' && *c <= 'z')
*c -= 32;
c++;
}
return (re);
}
