#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
int re;

if (argc != 3)
{
printf("Error\n");
return (1);
}
re = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", re);
return (0);
}
