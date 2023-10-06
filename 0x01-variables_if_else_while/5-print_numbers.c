#include <stdio.h>

/**
* main - Entry point
* Description - displays all numbers base 10 single numbers
* Return: (0) success
*/
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		printf(numbers);
		numbers++;
	}
	printf('\n');

	return (0);
}
