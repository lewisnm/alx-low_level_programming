#include "main.h"
/**
* print_diagonal - prints a diagonal line
* @n: The number to determine the lengh of a line
* Return: 0 success
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < (i - 1); j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
