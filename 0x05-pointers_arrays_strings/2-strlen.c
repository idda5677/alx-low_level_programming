/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * This function takes a pointer to a string as a parameter and returns
 * the length of the string (number of characters excluding the null terminator).
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}
