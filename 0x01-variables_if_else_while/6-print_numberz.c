#include <stdio.h>
/**
* main - Entry point
* Description - displays all letters from a-z in lowercase
* Return: (0) success
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
	putchar(i + '0');
	i++;
	}
	putchar('\n');
	return (0);
}
