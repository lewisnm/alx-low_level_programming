#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}

/**
* main - calls the variable
*
* Return: 0 success
*/

int main(void)
{
	print_alphabet_X10();
	return (0);
}
