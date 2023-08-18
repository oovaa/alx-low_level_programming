#include<stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
 *
*/

double _sqrt(double x)
{
	float sq, t;

	sq = x / 2;
	t = 0;

	while (sq != t)
	{
		t = sq;
		sq = (x / t + t) / 2;
	}
	return (sq);
}

/**
 * largest_prime_factor - finds and prints the largest
 *			prime factor of number (num)
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
int pr, l;
while (num % 2 == 0)
	num = num / 2;
for (pr = 3; pr <= _sqrt(num); pr += 2)
{
while (num % pr == 0)
{
num = num / pr;
l = pr;
}
}
if (num > 2)
	l = num;
printf("%d\n", l);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
l_prime_factor(612852475143);
return (0);
}
