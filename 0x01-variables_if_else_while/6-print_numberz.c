#include <stdio.h>

/**
 * main - print 0 to 9 as char
 *
 * Return: 0 after successs
 */

int main(void)
{
	char i = '0';
	for (i = '0';i <= '9';i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
