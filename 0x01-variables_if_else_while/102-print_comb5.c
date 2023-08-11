#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription:a program that prints
 * all possible combinations of two two-digit numbers.
 *
 * Return: Alyways zero
*/
int main(void)
{
int a = 0;
int b = 0;
while (a < 100)
{
b = a;
while (b < 100)
{
if (a != b)
{

putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(' ');
putchar((b / 10) + '0');
putchar((b % 10) + '0');
if (a != 98 || b != 99)
{
putchar(',');
putchar(' ');
}
}
++b;
}

++a;
}
putchar('\n');
return (0);
}
