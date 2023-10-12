#include "main.h"
/**
* print_diagonal - prints a diagonal line
* @n: The number to determine the lengh of a line
* Return: 0 success
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	return (0);
}
