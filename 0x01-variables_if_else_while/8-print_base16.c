#include <stdio.h>

/**
 * main - print all characters from base16
 *
 * Return: 0 success
 */

int main(void)
{
	int i = '0';
	char j = 'a';
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
