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
printf("%d is positive", n);
}
else if (n < 0)
{
printf("%d is negative", n);
}
else
{
printf("0 is zero");
}


return (0);
}
