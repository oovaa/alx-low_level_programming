#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: the number of the numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);

if (separator == NULL)
separator = "";


for (i = 0; i < n - 1; i++)
{
printf("%d%c ", va_arg(args, int), *separator);
}
printf("%d\n", va_arg(args, int));
va_end(args);

}
