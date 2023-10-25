#include "main.h"

/**
 * actual_formula - calculates if a number is prime recursively
 * @n: input value
 * @j: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_formula(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
		return (actual_formula(n, j - 1));
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: input number
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
		return (actual_formula(n, n - 1));
}
