#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main- Entry point
*Description- code picks a random number and states its integral value
*Return:(0) success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* for loop placing the n value into a class */
	if (n == 0)
	{
/* if true print the following */
	printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
/* if else if condition is true print the following */
	printf("%d is negative\n", n);
	}
	else
	{
/* if none of the conditions are met */
	printf("%d is positive\n", n);
	}
	return (0);
}
