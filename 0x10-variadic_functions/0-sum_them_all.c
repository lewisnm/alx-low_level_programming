#include "variadic_functions.h"

/**
 * sum_them_all - adds all parameters inputed
 * @n: number of arguments passed
 *
 * Return: s
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int j, s = 0;

	va_start(args, n);

	for (j = 0; j < n; j++)
		s += va_arg(args, int);

	va_end(args);

	return (s);
}
