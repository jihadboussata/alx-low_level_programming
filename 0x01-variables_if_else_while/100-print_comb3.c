#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 * Numbers are separated by ", " (comma and space).
 * The two digits must be different.
 * 01 and 10 are considered the same combination.
 * Prints only the smallest combination of two digits.
 * Numbers are printed in ascending order with two digits.
 * Uses the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 8; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            putchar(i + '0');
            putchar(j + '0');

            if (i < 8 || j < 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}

