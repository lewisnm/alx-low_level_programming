#include <stdio.h>
/**
* main - Entry point
* Description - displays all possible three combination number
* Return: (0) success
*/

int main(void)
{
	int firstDigit, secondDigit, thirdDigit;

	for (firstDigit = '0'; firstDigit <= '7'; firstDigit++)
	{
	for (secondDigit = firstDigit + 1; secondDigit <= '8'; secondDigit++)
	{
	for (thirdDigit = secondDigit + 1; thirdDigit <= '9'; thirdDigit++)
	{
	putchar(firstDigit);
	putchar(secondDigit);
	putchar(thirdDigit);

	if (!(firstDigit == '7' && secondDigit == '8' && thirdDigit == '9'))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
}

