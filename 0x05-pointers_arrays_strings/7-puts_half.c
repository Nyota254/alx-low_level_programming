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
    int i, j, k;

    i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    j = i/2;

    for(k = j ; k <= i; k++)
    {
        _putchar(str[k]);
    }
    
    _putchar('\n');
}