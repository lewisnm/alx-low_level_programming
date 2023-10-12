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

	for (x = 0; x < 10; x++)
	{
		for (z = 0; z < 15; z++)
		{
			_putchar(z + '0');
		}
		_putchar('\n');
	}
}
