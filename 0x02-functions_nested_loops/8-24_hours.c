#include "main.h"

/**
* jack_bauer - all minutes of one day
*
* Return: void
*/

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');

			if (hour != 23 || minute != 59)
			{
				_putchar('\n');
			}
		}
	}

}
