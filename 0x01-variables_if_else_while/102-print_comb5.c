#include <stdio.h>
/**
* main - Entry point
* Description - displays all possible combinations of two two digit no.
* Return: (0) success
*/
int main(void)
{

	for (int num1 = 0; num1 <= 99; num1++)
	{
	for (int num2 = num1 + 1; num2 <= 99; num2++)
	{
	putchar((num1 / 10) + '0');
	putchar((num1 % 10) + '0');
	putchar(' ');
	putchar((num2 / 10) + '0');
	putchar(num2 % 10) + '0');

	if (!(num1 != 98 && num2 != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}

	putchar('\n');

	return (0);
}