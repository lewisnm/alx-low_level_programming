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
		int i;
		int j;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				else if (j < i)
					_putchar('');
				}
				_putchar('\n');
			}
		}
}
