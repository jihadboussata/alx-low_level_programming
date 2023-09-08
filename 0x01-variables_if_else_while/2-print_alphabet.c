#include <stdio.h>

/**
 * main - putchars lowercase alphabets
 *
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'a', i <= 'z', i++)
		putchar(i);

	putchar('\n');

	return (0);
}
