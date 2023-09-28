#include <stdio.h>

void print_binary(unsigned long int n)
{
if (n == 0)
{
printf("0");
return;
}

unsigned long int mask = 1UL << 31;

int leading_zeros = 1;

while (mask)
{
if (n & mask)
{
leading_zeros = 0;
putchar('1');
}
else if (!leading_zeros)
{
putchar('0');
}

mask >>= 1;
}
}

int main(void)
{
unsigned long int number = 7;
printf("Binary representation of %lu: ", number);
print_binary(number);
printf("\n");

return 0;
}