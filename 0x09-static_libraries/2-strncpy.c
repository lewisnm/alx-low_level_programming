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

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}

	return (dest);
}
