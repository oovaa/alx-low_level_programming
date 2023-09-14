#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: number of strings to print
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *hold;
va_start(args, n);

if (separator == NULL)
separator = "";

for (i = 0; i < n - 1; i++)
{
hold = va_arg(args, char *);
if (hold == NULL)
printf("(nil)%c ", *separator);
else
printf("%s%c ", hold, *separator);
}
hold = va_arg(args, char *);
if (hold == NULL)
printf("(nil)\n ");
else
printf("%s\n", hold);
va_end(args);

}
