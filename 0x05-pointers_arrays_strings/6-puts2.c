#include "main.h"

/**
 * puts2 - prints all charaters in a string
 *
 * @str: where the string is stored
 *
 * Return: void
 */

void puts2(char *str)
{
	int length = 0;
	int z = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	z = length - 1;
	for(x = 0; x <= z; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(*str(x));
		}
		_putchar('\n');
	}
}
