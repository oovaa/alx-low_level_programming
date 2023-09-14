#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
/**
 * print_all -  function that prints anything.
 * @format: is a list of types of arguments passed to the function
 *
*/

void print_all(const char * const format, ...)
{
va_list args;
int i, flag;
va_start(args, format);
i = 0;

while (format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
flag = 0;
break;

case 'i':
printf("%i", va_arg(args, int));
flag = 0;
break;

case 'f':
printf("%f", va_arg(args, double));
flag = 0;
break;

case 's':
printf("%s", va_arg(args, char *));
flag = 0;
break;

default:
flag = 1;
break;
}
if (format[i + 1] && flag == 0)
printf(", ");
i++;
}
printf("\n");
va_end(args);
}
