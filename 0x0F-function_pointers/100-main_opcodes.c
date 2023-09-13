#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
int n, i;
char *a;
if (argc != 2)
{
printf("Error\n");
return (1);
}

if (n < 0)
{
printf("Error\n");
return (2);
}

n = atoi(argv[1]);
a = (char *)&main;

for (i = 0; i < n; i++)
{
printf("%.2hhx", a[i]);
if (i < n - 1)
printf(" ");
}
printf("\n");

return (0);
}
