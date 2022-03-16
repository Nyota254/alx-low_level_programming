#include "main.h"

/**
 * print_sign - prints +,0,- depending on number positivity
 * 
 * @n:number to be checked
 * 
 * Return: returns 1 if positive 0 if zero -1 if negative
 * 
 */

int print_sign(int n)
{
    if(n < 0)
    {
        return (-1);
        _putchar(45);
    }
    else if(n == 0)
    {
        return (0);
        _putchar(48);
    }
    else
    {
        return (+1);
        _putchar(43);
    }
}