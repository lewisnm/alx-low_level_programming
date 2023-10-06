#include <stdio.h>
/**
* main - Entry point
* Description - does every possible combination of single numbers
* Return: (0) success
*/
int main(void)
{
	 int pair = '0';

	while (pair <= '9')
	{
	putchar(pair);

	if (pair != '9')
	{
	putchar(',');
	putchar(' ');
	}

	pair++;
	}

	putchar('\n');

	return (0);
}
