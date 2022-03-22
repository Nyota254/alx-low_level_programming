#include "main.h"

/**
 * _strlen - returns legth of string
 * @s:string to be length checked
 * Return: length of string
 * 
 */

int _strlen(char *s)
{
    int counter;

    counter = 0;

    while (s[counter] != '\0')
    {
        counter++;
    }
    return (counter);
}