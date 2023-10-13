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
		putchar('\n');
	}
	else
	{
		int l;

		for (int l = 1; l <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
