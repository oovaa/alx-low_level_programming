
#include "main.h"

/**
 * validate - validates for the square root
 * @n:int
 * @b:int
 *
 * Return: int
 */
int validate(int n, int b)
{
	if (n * n == b)
		return (n);
	if (n * n > b)
		return (-1);
	return (validate(n + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (validate(1, n));
}
