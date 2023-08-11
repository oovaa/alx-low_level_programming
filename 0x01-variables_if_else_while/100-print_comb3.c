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
int a = i + 1;
while (i < 9)
{
while (a < 10)
{

putchar(i + '0');
putchar(a + '0');
if (i + a != 17)
{
putchar(',');
putchar(' ');
}

a++;
}
a = i + 2;
i++;
}
putchar('\n');

return (0);
}
