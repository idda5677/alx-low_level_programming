#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all possible combinations of single-digit numbers,
 * separated by ', ', in ascending order using the putchar function.
 *
 * Return: 0 (success)
 */
int main(void)
{
    int number;

    for (number = 0; number < 10; number++)
    {
        putchar(number + '0');

        if (number != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return 0;
}

