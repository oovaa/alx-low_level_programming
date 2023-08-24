#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @s: targeted string
 * Return: the string coded
 */

char *rot13(char *s)
{
char src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char des[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; s[i] != '\0'; i++)
{

for (j = 0; src[j] != '\0'; j++)
{
if (s[i] == src[j])
{
s[i] = des[j];
break;
}
}
}
return (s);
}
