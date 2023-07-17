#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the alphabet in lowercase using the putchar function.
 *
 * Return: 0 (success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');

    return 0;
}

