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
		for (z = 0; z <= 14; z++)
		{
			_putchar(48 + z);
		}
		_putchar('\n');
	}
}
