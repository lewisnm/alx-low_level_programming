#include "main.h"

/**
 * int _strlen - determines the length of a string
 *
 * @s: the variable storing the string
 *
 * Return: length
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
