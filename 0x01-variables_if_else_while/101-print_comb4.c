#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription: a program that prints all possible different
 *  combinations of two digits.
 *
 * Return: Alyways zero
*/
int main(void)
{
int i = 0;
int a;
int c;
while (i <= 9)
{
a = i + 1;
while (a <= 9)
{
c = a + 1;
while (c <= 9)
{
putchar(i + '0');
putchar(a + '0');
putchar(c + '0');
if (a + i + c != 24)
{
putchar(',');
putchar(' ');
}

++c;
}
++a;
}
++i;
}
putchar('\n');
return (0);
}
