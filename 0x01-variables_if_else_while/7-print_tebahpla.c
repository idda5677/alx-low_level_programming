#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the lowercase alphabet in reverse,
 * followed by a new line, using the putchar function.
 *
 * Return: 0 (success)
 */
int main(void)
{
    char letter;

    letter = 'z';

    while (letter >= 'a')
    {
        putchar(letter);
        letter--;
    }

    putchar('\n');

    return 0;
}

