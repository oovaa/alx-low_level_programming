#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *@s: targeted string
 * Return: the converted integer value
 */
int _atoi(char *s)
{
int sign = 1;
int i =0;
int num = 0;
while (*(s + i) != '\0')
{
if (*s == '-')
sign *= -1;
if(s[i] >= '0' && s[i] <= '9')
num += (num * 10) + (*s - 48);
i++;
}
return (i * sign);
}
