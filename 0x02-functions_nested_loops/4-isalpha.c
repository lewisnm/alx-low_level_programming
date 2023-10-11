#include "main.h"

/**
* _isalpha - checks to see if its alphabetic
* @c: The characetr being tested
* Return: 0 success
*/

int _isalpha(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
		return (1);
	else
		return (0);
}
