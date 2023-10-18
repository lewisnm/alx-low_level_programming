#include "main.h"

/**
 * _strcat - it concatinates two strings together
 *
 * @dest: first string
 * @src: second string
 *
 * Return: zero
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
