#include <stdio.h>

/**
 *  main - entry point
 *  Description: a program that prints all single digit numbers of base 10
 *  starting from 0, followed by a new line.
 *
 *
 * Return: always zero
*/

int main(void)
{
for (int i = 0; i < 10; i++)
{
printf("%d", i);
}
puts("");
return (0);
}
