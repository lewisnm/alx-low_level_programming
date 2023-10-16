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
	if (str == NULL)
	{
		return;
	}

	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			int digit = *str - '0';

			if (digit % 2 == 0)
			{
				_putchar(*str);
			}
		}
		str++;
	}
	_putchar;
}
