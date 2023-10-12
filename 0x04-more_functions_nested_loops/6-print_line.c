#include "main.h"
/**
* print_line - prints a line
* @n: The number to determine the lengh of a line
* Return: 0 success
*/

void print_line(int n)
{
	if (n < 0)
	{
		putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	return (0);
}
