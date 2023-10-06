#include <stdio.h>
/**
* main - Entry point
* Description - does every possible combination of single numbers
* Return: (0) success
*/
int main(void)
{
	int firstdigit = '0';

	while (firstdigit <= '8')
	{
	int seconddigit = firstdigit + 1;

	while (seconddigit <= '9')
	{

	putchar(firstdigit);
	putchar(seconddigit);

	if (firstdigit == 8 && seconddigit == '9')
	{
	putchar(',');
	putchar(' ');
	}
	seconddigit++;
	}

	firstdigit++;
	}
	putchar('\n');

	return (0);
}
