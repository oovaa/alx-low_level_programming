#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * print_buffer - a function that prints a buffer.
 * @b: buffer
 * @size: size bytes of the buffer
 */

void print_buffer(char *b, int size)
{
int i;
int j;
if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = i; j < i + 10; j += 2)
{
if (j < size)
printf("%02x", b[j] & 0xFF);
else
printf("  ");
if (j + 1 < size)
printf("%02x ", b[j + 1] & 0xFF);
else
printf("   ");
}
printf(" ");
for (j = i; j < i + 10 && j < size; j++)
{
if (isprint(b[j]))
printf("%c", b[j]);
else
printf(".");
}
printf("\n");
}
}
