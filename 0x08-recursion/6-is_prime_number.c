#include "main.h"
/**
 * check - check if it is a prime number
 * @n: the numbe to check
 * @t: check number;
 * Return: 0 if the number is not prime, 1 if it is prime
*/

int check(int t, int n)
{
if (t == n - 1)
return (1);
if (n % t == 0)
return (0);

return (check(t + 1, n));
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: number to check
 * Return: 1 if the input integer is a prime number, otherwise return 0.
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (check(2, n));
}
