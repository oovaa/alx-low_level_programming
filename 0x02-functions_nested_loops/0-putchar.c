#include "main.h"

/**
 * main - Entry point
 *
 * Discription:  a program that prints _putchar,
 * followed by a new line.
 *
 * Return: Alyways zero
*/

int main(void)
{
char st[] = "_putchar";
int i;
for (i = 0; i < sizeof(st); i++)
_putchar(st[i]);
_putchar('\n');

return (0);
}
