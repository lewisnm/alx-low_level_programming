#include "main.h"

/**
* print_sign - checks for the sign of a number
*
* @n: The characetr being tested
*
* Return:  0 success
*/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
