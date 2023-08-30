#include "main.h"

/**
 * check - check two chars
 * @f: first to check
 * @l: second to check
 * Return: 1 if chars are the same, 0 otherwise
 */
int check(char *f, char *l)
{
if (*f != *l)
return (0);

if (f >= l)
return (1);

return (check(f + 1, l - 1));
}

/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if a string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
char *l;
int i = 0;

if (*s == '\0')
return (1);

for (i = 0; s[i]; i++)
l = s + i;

return (check(s, l));
}
