#include <stdio.h>

/**
 * main - putchars lowercase and uppercase alphabets
 *
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');

	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
