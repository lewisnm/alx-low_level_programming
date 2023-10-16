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
	int digitCounter = 0;

	if (str == NULL)
	{
		return;
	}

	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			int digit = *str - '0';

			if (digit == digitCounter)
			{
				putchar(*str);
				digitCounter++;
			}
		}
		str++;
	}
	_putchar('\n');
}
