#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main- Entry point
*Description- code tells whether n is greater, equal to or less than zero
*Return:(0) success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5.\n", n);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d and is 0.\n", n);
	}
	else if (n < 6)
	{
	printf("Last digit of %d is %d and is less than 0.\n", n);
	return (0);
}
