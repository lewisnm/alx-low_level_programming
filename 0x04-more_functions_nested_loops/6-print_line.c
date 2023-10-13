#include "main.h"
/**
* print_line - prints a line
* @n: The number to determine the lengh of a line
* Return: void
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k;

		for (int k = 0; k < n; k++) 
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
