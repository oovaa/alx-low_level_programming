#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates an infinite loop.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;
/**
 * while (i < 10)
 */
{
putchar(i);
}
printf("Infinite loop avoided! \\o/\n");
return (0);
}
