#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **words;
int len = 1, i;

if (str == "" || str == NULL)
return (NULL);


for (i = 1; str[i]; i++)
if (str[i] != ' ' && str[i - 1] == ' ')
len++;

words = (char **)malloc(len *sizeof(char *));

if (words == NULL)
return (NULL);


return (words);
}
