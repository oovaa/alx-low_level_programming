#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program checks if a given number is positive, negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
puts("is positive");
}
else if (n < 0)
{
puts("is negative");
}
else
{
puts("is zero");
}


return (0);
}
