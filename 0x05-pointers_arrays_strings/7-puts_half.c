#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *@str: targeted string
 */
void puts_half(char *str)
{
int l;
int i;
for (l = 0; str[l] != '\0'; ++l)
;
for (i = ((l - 1) / 2) + 1; str[i] != '\0'; ++i)
putchar(*(str + i));

putchar('\n');
}
