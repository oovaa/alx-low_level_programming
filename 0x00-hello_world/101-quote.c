#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: C program that prints "and that piece of art is useful"
 *  - Dora Korpar, 2015-10-19,
 *              followed by a new line, to the standard error.
 *
 * Return: 1 (Error)
 */
int main(void)
{char message[] = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, sizeof(message) - 1);
return (1);
}
