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
    while (*s != '\0')
    {
        counter++;
        s++;
    }
    return (counter);
}