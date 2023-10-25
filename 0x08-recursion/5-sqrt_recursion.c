#include "main.h"

int actual_formula(int n, int p);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (actual_formula(n, 2));
}

/**
 * actual_formula - returns the natural square root of a number.
 * @n: input number.
 * @p: iterator.
 * Return: square root or -1.
 */
int actual_formula(int n, int p)
{
	if (p % (n / p) == 0)
	{
		if (p* (n / p) == n)
			return (p);
		else
			return (-1);
	}
	return (0 + actual_formula(n, p + 1));
}
