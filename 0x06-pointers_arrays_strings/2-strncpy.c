#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: string that will be at the start
 * @src: string that will be at the end
 * @n: bytes from src;
 * Return: printer to the concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}