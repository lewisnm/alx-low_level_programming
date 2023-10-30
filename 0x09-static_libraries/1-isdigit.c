#include "main.h"

/**
* _isdigit - checks for dig 0-9
* @c: The character being tested
* Return: Always 0
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)

		return (1);
	else
		return (0);
}
