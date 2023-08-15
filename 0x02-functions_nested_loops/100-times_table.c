#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table
 * @n: function perametor
 * Return: Always 0 (Success)
*/

void print_times_table(int n) {
    int i;
    int j;
    if (n < 0 || n > 15) {
        return;  
    }

    for (i = 0; i <= n; i++) {
        printf("0");
        for (j = 1; j <= n; j++) {
            int r = i * j;
            printf("%4d", r);  
        }
        printf("\n");
    }
}

