#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * 
 * @str: character
 *
 * Return: *pnt
 *
 */
char *_strdup(char *str)
{
	int a;
	char *pnt;
	int b = 0;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		b++;

	pnt = malloc(sizeof(char)* count + 1);

	if (pnt == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		pnt[a] = str[a];

	return (pnt);

}
