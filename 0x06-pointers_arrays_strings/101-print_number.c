#include "main.h"
/**
 * print_number - unction that prints an integer.
 * @n: the number
 *
*/


void print_number(int n)
{
int h = 0;
if (n < 0)
{
_putchar('-');
n *= -1;
}
if (n == 0)
_putchar('0');


while (n != 0)
{
h = 10 * h + n % 10;
n /= 10;
}
while (h != 0)
{
_putchar((h % 10) + '0');
h /= 10;
}
}
