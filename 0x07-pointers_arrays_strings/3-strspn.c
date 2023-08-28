#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: targeted string
 * @accept: string to compare
 * Return: length of a prefix substring.
 *
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i = 0, j = 0, test = 0;

while (s[i])
{
test = 0;
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
{
count++;
test = 1;
break;
}
j++;
}

if (test == 0)
return (count);

i++;
}
return (count);
}
