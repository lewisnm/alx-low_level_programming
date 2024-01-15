#include "main.h"

/**
  * _strspn - main function
  *
  * @s: string the function is executed on
  * @accept: acceptable characters
  *
  * Return: length of acceptable string
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int i = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
			i++;
			break;
			}
			else if (accept[k + 1] == '\0')
			return (i);
		}
		s++;
	}
	return (i);
}
