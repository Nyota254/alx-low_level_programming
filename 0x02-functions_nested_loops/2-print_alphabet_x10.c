#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets qo times
 */

void print_alphabet_x10(void)
{
    char j = 'a';
    char i;
    for(i = 1; i <= 10; i++)
    {
        for(j = 'a';j <= 'z';j++)
        {
            _putchar(j);
        }
        _putchar('\n');
    }
}