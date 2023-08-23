#include "main.h"
#include <stdio.h>
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: string that will be at the start
 * @src: string that will be at the end
 * Return: printer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
while (dest[i++] != '\0')
;

i--;

while (*src)
dest[i++] = *src++;

return (dest);
}
