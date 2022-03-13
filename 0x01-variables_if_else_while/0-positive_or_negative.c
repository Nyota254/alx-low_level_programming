#include <stdlib.h>
#include <time.h>

/**
 * main - function returns whether a number is positive or negative
 *
 * Return: number is positive or number is negative
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		return ("%d is negative",n);
	else
		return ("%d is positive",n);
	return (0);
}
