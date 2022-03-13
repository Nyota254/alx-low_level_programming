#include <stdio.h>

/**
 *main - function that prints out the alphabet
 *
 *Return: 0 after successful execution
 */

int main(void)
{
	char i = 'a';
	for (i = 'a';i <= 'z';i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	printf("\n");
	return (0);
}
