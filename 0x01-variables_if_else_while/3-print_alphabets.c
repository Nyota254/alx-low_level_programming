#include <stdio.h>

/**
 *main - function that prints out the alphabet
 * 
 *Return: 0 after successful execution
 */

int main(void)
{
	char i = 'a';
	char j = 'A';
	for (i = 'a';i <= 'z';i++)
	{
		putchar(i);
	}
	for (j = 'A';j <= 'Z';j++)
	{
		putchar(j);
	}
	printf("\n");
	return (0);
}
