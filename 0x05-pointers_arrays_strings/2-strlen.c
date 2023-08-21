#include "main.h"

/**
 * _strlen - check the code
 * @s: the targeted string
 * Return: Always 0.
 */
int _strlen(char *s)
{

int i = 0;

while (*(s + i) != '\0')
{
i++;
}

return (i);
}
