#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */


void print_diagsums(int *a, int size)
{
int sumFirst = 0;
int sumSecond = 0;
int i = 0;

for (i = 0; i < size; i++)
{
sumFirst += a[i * size + i];
sumSecond += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sumFirst, sumSecond);

}
