#include "main.h"
#include <string.h>
/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

size_t i;
unsigned int j;
char *re;
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

re = malloc(sizeof(char) * (strlen(s1) + n + 1));

if (re == NULL)
return (NULL);

for (i = 0; i < strlen(s1); i++)
re[i] = s1[i];

for (j = i; j < n + i; j++)
re[j] = s2[j - i];

re[j] = '\0';
return (re);
}
