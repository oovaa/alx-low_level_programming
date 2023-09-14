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
int i;
va_start(args, format);
i = 0;

while (format[i])
{
switch (format[i])
{
case 'c':
printf("%c, ", va_arg(args, int));
break;
case 'i':
printf("%i, ", va_arg(args, int));
break;
case 'f':
printf("%f, ", va_arg(args, double));
break;
case 's':
printf("%s, ", va_arg(args, char *));
break;

default:
break;
}

i++;
}
printf("\n");
va_end(args);
}
