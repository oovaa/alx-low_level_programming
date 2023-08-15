#include "main.h"

/**
 * _isalpha - check the code.
 *
 *
 * @c: checks input of function
 *
 *
 * Discription: a function that checks for alphabetic character.
 * Return: Always 0.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') ? 1 : (c >= 'A' && c <= 'Z') ? 1 : 0);
}
