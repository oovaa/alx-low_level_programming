#include "main.h"

/**
 * _isupper - return if the letter is upper or not
 *
 * Return: 1 or 0
 *
 * @c: ascii for the letter
 *
*/



int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
