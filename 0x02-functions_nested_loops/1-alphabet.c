#include "main.h"

/**
 * main - prints alphabet
 * 
 * Return: Always 0
 */

void print_alphabet(void)
{
    char i = 'a';
    for(i = 'a';i <= 'z';i++)
    {
        _putchar(i);
    }
    _putchar('\n');

    return (0);
}