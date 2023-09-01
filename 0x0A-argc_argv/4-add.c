#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
int i, n;
int re = 0;
char *flag;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
n = strtol(argv[i], &flag, 10);
if (*flag)
{
printf("Error\n");
return (1);
}
re += n;
}
printf("%d\n", re);
return (0);
}
