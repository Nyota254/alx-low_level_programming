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

    int i;

    counter = 0;

    while(s[counter] != '\0')
    {
        counter++;
    }

    num = counter;

    for(i = num - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }
    _putchar(s[i]);
}