#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from
 * n to 98, followed by a new line.
 *
 *@n:  first perametot
 * Return: Always 0 (Success)
*/

void print_to_98(int n)
{
int count;
if (n > 98)
	for (count = n; count > 98; --count)
		printf("%d, ", count);
else
	for (count = n; count < 98; ++count)
		printf("%d, ", count);
printf("98\n");

}
