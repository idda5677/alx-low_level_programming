#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * This program will assign a random number to the variable n each time it is executed.
 * It will print the last digit of the number stored in the variable n.
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int lastDigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	lastDigit = n % 10;

    	if (lastDigit > 5)
    	{
        printf("%d and is greater than 5", lastDigit);
    	}
    	else if (lastDigit == 0)
    	{
        printf("%d and is 0", lastDigit);
    	}
    	else
	{
        printf("%d and is less than 6 and not 0", lastDigit);
    	}

   	 printf("\n");

    	return 0;
}
