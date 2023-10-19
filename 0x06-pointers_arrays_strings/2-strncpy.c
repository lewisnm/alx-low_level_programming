#include "main.h"

/**
 * _strncpy - copies strings
 *
 * @dest: first string
 * @src: second string
 * @n: limit to the number of chars src can output
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i = 0;
	int srcLength = strlen(src);

	for (; i < n && i < srcLength; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
