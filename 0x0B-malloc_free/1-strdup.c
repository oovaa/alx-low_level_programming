#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 * Return: returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
int len, i;
char *newstr;

if (str == NULL)
return (NULL);

len = strlen(str);
newstr = malloc(len *sizeof(char) + 1);

if (newstr == NULL)
return (NULL);

for (i = 0; str[i] ; i++)
newstr[i] = str[i];

newstr[i] = '\0';


return (newstr);
}
