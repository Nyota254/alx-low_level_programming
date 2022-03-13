#include <stdio.h>

/**
 * main - print all single digit combinations
 *
 * Return: 0 after successful execution
 */

int main(void)
{
	int i='0';
	for (i = '0';i <= '9';i++)
	{
		if(i != '9')
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(i);
		}
	}
	return (0);
}
