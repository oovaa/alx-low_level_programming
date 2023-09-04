#include "main.h"
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments array
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *result;
int i, len;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
len += strlen(av[i]);

result = (char *)malloc(len *sizeof(char) + 1);
for (i = 0; i < ac; i++)
{
strcat(result, av[i]);
strcat(result, "\n");
}
strcat(result, "\0");

return (result);
}
