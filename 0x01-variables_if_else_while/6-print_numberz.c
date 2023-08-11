#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription:  program that prints all single digit numbers of
 *  base 10 starting from 0, followed by a new line.
 *
 *
 * Return: Always zero
*/
int main(void)
{
char i = '0';
while (i <= '9')
{
putchar(i);
i++;
}
putchar('\n');

return (0);
}
