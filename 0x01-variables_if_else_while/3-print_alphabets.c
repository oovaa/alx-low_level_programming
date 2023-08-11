#include <stdio.h>

/**
 *  main - entry point
 *  Description: a program that prints the alphabet in lowercase,
 *  and then in uppercase, ollowed by a new line.
 *
 *
 * Return: always zero
*/

int main(void)
{
char i = 'a';
while (i <= 'z')
{
putchar(i);
i++;
}
i = 'A';
while (i <= 'Z')
{
putchar(i);
i++;
}

putchar('\n');
return (0);
}
