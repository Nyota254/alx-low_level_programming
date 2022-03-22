#include "main.h"

/**
 * puts2 - prints every other character of a string
 * 
 * @str:string to be printed every other character
 * 
 * Return: Void Nothing
 * 
 */

void puts2(char *str)
{
    int i,j;
    
    i = 0;
    j = 2;

    while(str[i] != '\0')
    {
        i++;
    }

    while(j < i && i-j > 1)
    {
        _putchar(str[j]);
        j+=2;
    }
    _putchar('\n');
    
}