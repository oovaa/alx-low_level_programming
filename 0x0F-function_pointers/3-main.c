#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - ...
  * @argc: ...
  * @argv: ...
  *
  * Return: ...
  */
int main(int argc, char *argv[])
{
int (*re)(int, int), n1, n2;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

n1 = atoi(argv[1]);
n2 = atoi(argv[3]);

re = get_op_func(argv[2]);

if (!re)
{
printf("Error\n");
exit(99);
}

printf("%d\n", re(n1, n2));


return (0);
}

