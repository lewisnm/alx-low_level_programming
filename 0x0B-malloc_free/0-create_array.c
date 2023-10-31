#include "main.h"

/**
 * create_array - creates an array
 *
 * @size: size of the array
 * @c: the character to be stored
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *prt;
	if (size == 0)
		return (NULL);

	prt = malloc(sizeof(char) * size);

	if (prt == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		prt[k] = c;
	return (prt);
}
