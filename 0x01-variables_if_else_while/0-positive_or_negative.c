#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program will assign a random number to the variable n each time it is executed.
 * It will print whether the number stored in the variable n is positive, zero, or negative.
 *
 * Return: 0 (success)
 */
int main(void)
{
    int n;

    srand(time(0)); 
    n = rand() - RAND_MAX / 2; 

    printf("The number %d is ", n);

    if (n > 0)
    {
        printf("positive");
    }
    else if (n == 0)
    {
        printf("zero");
    }
    else
    {
        printf("negative");
    }

    printf("\n");

    return 0;
}

