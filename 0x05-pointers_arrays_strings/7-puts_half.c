#include "main.h"

/**
 * puts_half - prints half of a string 
 * 
 * @str:string lto be printed half way
 * 
 * Return:Nothing(void)
 */

void puts_half(char *str)
{
    int i, j;

    i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    j = i/2;

    while(j <= i)
    {
        _putchar(str[j]);
        j++;
    }
    
    _putchar('\n');
}