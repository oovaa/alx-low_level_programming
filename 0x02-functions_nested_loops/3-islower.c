#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: checks input of function
 * Discription: a function that checks for lowercase character.
 * in lowercase, followed by a new line.
 *
 * Return: no return
*/

int _islower(int c)
{
return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
