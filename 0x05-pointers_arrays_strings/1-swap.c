#include "main.h"

/**
 * swap_int - swaps tow ints values
 *
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
int t = *a;
*a = *b;
*b = t;
}
