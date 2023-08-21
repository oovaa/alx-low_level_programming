#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *@s: targeted string
 */
void print_rev(char *s)
{

int l = 0;
while (*(s + l) != '\0')
{
l++;
}
l--;
while (l >= 0)
{
putchar(*(s + l));
l--;
}
putchar('\n');
}
