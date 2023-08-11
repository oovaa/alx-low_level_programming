#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription: a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Alyways zero
 *
*/

int main(void)
{
char i = 'z';
while (i >= 'a')
{
putchar(i);
i--;
}
putchar('\n');

return (0);
}
