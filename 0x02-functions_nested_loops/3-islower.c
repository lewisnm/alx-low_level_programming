#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: The character being tested
 * Return: Always 0
 */

int _islower(int c)
{

	if (c < 97)

		return (0);
	else
		return (1);
}
