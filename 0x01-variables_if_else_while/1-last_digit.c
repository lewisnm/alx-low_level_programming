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
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (n > 5)
	{
	printf("Last digit of {n} is %d and is greater than 5.\n", n, l);
	}
	else if (n == 0)
	{
	printf("Last digit of {n} is %d and is 0.\n", n, l);
	}
	else if (n < 6)
	{
	printf("Last digit of {n} is %d and is less than 0.\n", n, l);
	return (0);
}
