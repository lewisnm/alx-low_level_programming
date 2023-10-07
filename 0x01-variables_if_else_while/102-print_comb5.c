#include <stdio.h>
/**
* main - Entry point
* Description - displays all possible combinations of two two digit no.
* Return: (0) success
*/
int main(void)
{
	int tens1, ones1, tens2, ones2;

	for (tens1 = 0; tens1 <= 9; tens1++)
	{
	for (ones1 = (tens1 == 0) ? 1 : 0; ones1 <= 9; ones1++)
	{
	for (tens2 = tens1; tens2 <= 9; tens2++)
	{
	for (ones2 = (tens1 == tens2) ? (ones1 + 1) : 0; ones2 <= 9; ones2++)
	{
	putchar((tens1 + '0') ? '0' : tens1 + '0');
	putchar(ones1 + '0');
	putchar(' ');
	putchar((tens2 + '0') ? '0' : tens2 + '0');
	putchar(ones2 + '0');

	if (!(tens1 == 9 && ones1 == 9 && tens2 == 9 && ones2 == 9))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}

	putchar('\n');

	return (0);
}
