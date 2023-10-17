#include "main.h"

/**
 * _strcpy - Copy a string from src to dest
 *
 * @dest: destination string
 * @src: src string
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	dest[z++] = '\0';

	return (dest);
}

