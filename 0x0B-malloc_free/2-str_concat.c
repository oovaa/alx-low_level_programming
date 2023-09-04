#include "main.h"
#include "string.h"
/**
 * str_concat - ada
 * @s1: first string
 * @s2: second string
 * Return: pointer to the two strings combined
*/

char *str_concat(char *s1, char *s2)
{
char *re;
int len;
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

len = strlen(s1) + strlen(s2) + 1;
re = (char *) malloc(len *sizeof(char));

if (re == NULL)
return (NULL);

strcpy(re, s1);
strcat(re, s2);

return (re);
}

