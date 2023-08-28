#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring.
 * @haystack:the string to search in
 * @needle:the substring to search for
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 *
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}


/*
*char *_strstr(char *haystack, char *needle)
*{
*int i = 0;
*int test;
*while (haystack)
*{
*i = 0;
*test = 1;
*while (needle[i])
*{
*if (needle[i] != haystack[i])
*{
*test = 0;
*break;
*}
*i++;
*}
*if (test == 1)
*{
*return (haystack);
*}
*haystack++;
*}
*
*
*return (NULL);
*}
*/
