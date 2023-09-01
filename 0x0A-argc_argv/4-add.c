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
int i;
int re = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!isdigit((unsigned char)argv[i][0]))
{
printf("Error\n");
return (1);
}
re += atoi(argv[i]);
}
printf("%d\n", re);
return (0);
}
