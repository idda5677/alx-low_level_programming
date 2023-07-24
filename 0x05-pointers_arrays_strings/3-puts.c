#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the string
 *
 * This function takes a pointer to a string as a parameter and prints
 * the string characters one by one until it reaches the null terminator.
 * After printing the string, it prints a new line character.
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}
