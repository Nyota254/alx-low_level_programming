#include "main.h"

/**
 * _islower - returns 1 if value is lowercase
 * 
 * @c: interger param to be checked
 * 
 * Return: 1 if value is lowercase
 */

int _islower(int c)
{
    if(c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}