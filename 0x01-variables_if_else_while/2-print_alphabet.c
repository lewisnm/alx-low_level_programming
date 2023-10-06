#include <stdio.h>
/**
 * main - Entry point
 * Description - displays all letters from a-z in lowercase
 * Return: (0) success
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
