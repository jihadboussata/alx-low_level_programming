#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Checks the sign of a random number
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* Checking the sign of n */

	if (n > 0)
		printf("%d is positive", n);

	else if (n == 0)

		printf("%d is zero", n);
	else
		printf("%d is negative", n);

	printf("\n");

	return (0);
}
