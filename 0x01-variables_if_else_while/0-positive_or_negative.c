#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determine if anumber is positive , negative , or zero
 *
 * Return: 0 on success
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() -RAND_MAX / 2;
    /* your code goes here */
     if (n > 0) {
        printf("is positive\n");
    } else if (n < 0) {
        printf("is negative\n");
    } else {
        printf("is zero\n");
    }

    return 0;
}

