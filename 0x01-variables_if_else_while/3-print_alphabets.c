#include <stdio.h>

/**
 * main - Entry point
 * Description - displays all letters of the alphabet in both lower and uppercase
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
	
	alphabet = 'A';
	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}
	
	putchar('\n');

	return (0);
}
