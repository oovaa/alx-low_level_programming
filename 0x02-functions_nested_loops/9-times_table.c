#include "main.h"
/**
 * print_last_digit - a fa function that prints the 9 times table, starting with 0.
 *
 *
 * Return: Always 0 (Success)
*/

void times_table(void)
{
int h;
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        h = i * j;
        if (h > 9)
        {
            _putchar(h / 10 + '0');
            _putchar(h % 10 + '0');
            _putchar(',');
            _putchar(' ');
        }
        else
        _putchar(h);
}   
}
}
