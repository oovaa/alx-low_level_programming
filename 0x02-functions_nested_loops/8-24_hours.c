#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
int h1 = 0;
int h2 = 0;
int m1 = 0;
int m2 = 0;
while (1)
{
_putchar(h1 + '0');
_putchar(h2 + '0');
_putchar(':');
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar('\n');
m2++;
if (m2 == 10)
{
m2 = 0;
m1++;
}
if (m1 == 6)
{
m1 = 0;
h2++;
}
if (h2 == 9)
{
h2 = 0;
h1++;
}
if (h1 == 2 && h2 == 4 && m1 == 0 && m2 == 0)
break;
}
}
