#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription: a program that prints all the numbers of base 16 in lowercase,
 *  followed by a new line.
 *
 * Return: Alyways zero
*/
int main(void)
{

int i = 0;
while (i < 16)
{
if (i > 9)
{
putchar(i + 'a' - 10);
}
else
{
putchar(i + '0');
}
i++;
}
putchar('\n');

return (0);
}
