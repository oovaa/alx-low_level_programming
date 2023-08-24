
#include "main.h"
/**
 * leet -  function that encodes a string into 1337.
 * @s: targeted string
 * Return: the string coded
 */

char *leet(char *s)
{
char *leetLetters = "aAeEoOtTlL";
char *leetNumbers = "4433007711";
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; leetLetters[j] != '\0'; j++)
{
if (s[i] == leetLetters[j])
{
s[i] = leetNumbers[j];
break;
}
}
}

return (s);
}
