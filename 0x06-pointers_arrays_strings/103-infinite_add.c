#include "main.h"
/**
 * infinite_add - function that adds two numbers.
 * @n1: first number as string
 * @n2: second number as string
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: If the result can not be stored in r the function must return 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
*r = *n1 + *n2;
size_r++;
return (r);
}
