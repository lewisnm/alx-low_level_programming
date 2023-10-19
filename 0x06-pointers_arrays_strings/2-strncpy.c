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
	int k = 0;
	int srcLength = strlen(src);

	for (; k < n && k < srcLength; k++)
	{
		dest[k] = src[k];
	}
	for (; k < n; k++)
	{
		dest[k] = '\0';
	}
	return (dest);
}
