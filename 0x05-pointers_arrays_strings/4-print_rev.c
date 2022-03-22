#include "main.h"

/**
 * print_rev - prints reverse string
 * 
 * @s:string to be reversed
 * Return:Nothing (void)
 */

void print_rev(char *s)
{
    int counter;

    int num;

    counter = 0;

    while(s[counter] != '\0')
    {
        counter++;
    }

    num = counter;

    while(num >= 0)
    {
        _putchar(s[num]);
        num--;
    }
}