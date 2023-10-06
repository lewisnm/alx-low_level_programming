#include <stdio.h>
/**
* main - Entry point
* Description - displays all hexa-decimal numbers in lowercase
* Return: (0) success
*/
int main(void)
{
	for (int i = 0; i < 16; i++)
	{
	if (i < 10)
	{
	putchar('0' + i);
	}
	else
	{
	putchar('a' + (i - 10));
	}

	}

	putchar('\n');

	return (0);
}
