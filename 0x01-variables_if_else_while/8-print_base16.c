#include <stdio.h>
/**
* main - Entry point
* Description - displays all hexa-decimal numbers in lowercase
* Return: (0) success
*/
int main(void)
{
	int i = 0;

	while (i < 16)
	{
	if (i < 10)
	{
	putchar('0' + i);
	}
	else
	{
	putchar('a' + (i - 10));
	}
	i++;
	}

	putchar('\n');

	return (0);
}
