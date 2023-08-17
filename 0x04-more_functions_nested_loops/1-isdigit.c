#include "main.h"

/**
 * m_isdigit - check if the int in represint a digit
 *
 * @c: input value
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
