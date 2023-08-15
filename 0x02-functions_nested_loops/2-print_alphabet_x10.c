#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Discription: a function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 *
 * Return: no return
*/

void print_alphabet_x10(void)
{
char i;
char a;
for (a = 0; i < 10; i++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}
