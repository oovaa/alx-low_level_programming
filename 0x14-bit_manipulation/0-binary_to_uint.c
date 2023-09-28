#include "main.h"
#include <stddef.h>


/**
 * to_int -converts a binary number to an unsigned int.
 * @i: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */

unsigned int to_int(int i)
{
int a = 1;
unsigned int hold = 1;
if (i == 0)
return (1);

for (a = 0; a < i; a++)
{
hold *= 2;
}

return (hold);
}


/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int re;
int i, diff;

re = 0;
i = 0;

if (b == NULL)
return (0);

while (b[i])
{
if ((b[i] != '0' && b[i] != '1'))
return (0);

i++;
}
i -= 1;

diff = i;

while (i >= 0)
{

if (b[i] == '1')
re += to_int(diff - i);

i--;
}

return (re);
}
