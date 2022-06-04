#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * manin - Entry point
 * main - Determines if number is less, greater or equals zero (0)
 * Return: Always 0 (Success)
 */

/**
 * Main - Entry point
 *
 * Return: Always 0 (success)
 */

	int main(void)
	{
	
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/*my code goes here */
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n==0)
		{
			printf("%d is zero\n", n);
		}
		else 
		{
			prinf("%d is negative\n", n);
		}
		return (0);
	}
