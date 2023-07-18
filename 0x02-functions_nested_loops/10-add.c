#include <stdio.h>  

int add(int a, int b);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);

    return 0;
}

