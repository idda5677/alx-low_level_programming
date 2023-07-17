#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the alphabet in lowercase (excluding 'q' and 'e'),
 * followed by a new line, using the putchar function.
 *
 * Return: 0 (success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
        {
            putchar(letter);
        }
    }

    putchar('\n');

    return 0;
}

