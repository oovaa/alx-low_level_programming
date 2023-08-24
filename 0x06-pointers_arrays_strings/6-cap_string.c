#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: pointer to the string
 * Return: pointer to the string capitalized
*/

char *cap_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 97 && s[i] <= 122)
{
if ((s[i] == '\n' || s[i] == '\t' || s[i] == ' ' 
|| s[i] == ','    || s[i] == ';'  || s[i] == '?' ||
s[i] == '!'      || s[i] == '.'  || s[i] == '\"' || 
s[i] == '('      || s[i] == ')'  || s[i] == '{' ||
s[i] == '}' )   && s[i+1] != '\0' )

s[i+1] -= 32;
}

i++;
}

return (s);
}
