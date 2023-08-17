
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: Always the multiplies two integers.
 *
 */

void more_numbers(void)
{
int i = 0;
int j = 0;
int f;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
if (i > 9)
{
f = i - 10;
_putchar('1');
_putchar(f + '0');
}
else
_putchar(i + '0');

}
_putchar('\n');
}
}
