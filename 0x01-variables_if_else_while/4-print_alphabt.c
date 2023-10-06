#include <stdio.h>
/**
* main - Entry point
* Description - displays all letters from a-z in lowercase, except 'q' and 'e'
* Return: (0) success
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	if (alphabet == 'q' || alphabet == 'e')
	{
		alphabet++;
		continue;
	}

	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');

	return (0);
}

