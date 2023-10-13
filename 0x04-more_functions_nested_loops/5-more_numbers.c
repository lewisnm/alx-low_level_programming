#include "main.h"

/**
* more_numbers - prints numbers 10 times
*
* Return: void
*/

void more_numbers(void)
{
	int x;
	int z;

	for (x = 1; x <= 10; x++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z >= 10)
				_putchar('1');
			_putchar(z % 10 + '0');
		}
		_putchar('\n');
	}
}
