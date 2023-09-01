#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int total, count = 0, i;
	int cents[] = {25, 10, 5, 2, 1};


if (argc != 2)
{
printf("Error\n");
return (1);
}
total = atoi(argv[1]);
if (total <= 0)
{
printf("0\n");
return (0);
}

while (total > 0)
{

for (i = 0; i < 5; i++)
{
if (total >= cents[i])
{
total -= cents[i];
count++;
break;
}
}
}
printf("%d\n", count);
return (0);
}
