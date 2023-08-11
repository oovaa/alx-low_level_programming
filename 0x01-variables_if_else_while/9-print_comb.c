#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription: a program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: Alyways zero
*/
int main(void)
{
int i = 0;
while (i < 9)
{
putchar(i + '0');
putchar(',');
putchar(' ');
i++;
}
putchar('9');
putchar('\n');
return (0);
}
