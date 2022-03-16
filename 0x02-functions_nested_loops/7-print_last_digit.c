#include "main.h"

/**
 * print_last_digit - prints last digit of a given number
 * 
 * @n: parameter interger to be checked
 * 
 * Return:Returns value of last digit
 * 
 */

int print_last_digit(int n)
{
    int i;
    if(n < 0)
    {
        i = n % -10;
        _putchar(i);
        return (i);
    }
    else if(n == 0)
    {
        _putchar(i);
        return (0);
    }
    else
    {
        i = n % 10;
        _putchar(i);
        return (i);
    }
}