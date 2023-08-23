#include "main.h"
/**
 * _strncat -  a function that concatenates two strings.
 * @dest: string that will be at the start
 * @src: string that will be at the end
 * @n: bytes from src; and
 * Return: printer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i++])
;
i--;
for (j = 0; j < n && src[j] != '\0'; j++)
dest[i++] = src[j];

dest[i] = '\0';

return (dest);
}
