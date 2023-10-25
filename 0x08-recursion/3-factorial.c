#include "main.h"

/**
 * factorial - prints the factorial of any number
 *
 * @n: any number
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
