#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: the string containing the character
 * @c: the character
 * Return: a pointer to the first occurrence of the character c
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

/**
*{
*while (*s)
*{   why did not work ?
*if (*s == c)
*return (s);
*s++;
*}
*return (NULL);
*}
 */
