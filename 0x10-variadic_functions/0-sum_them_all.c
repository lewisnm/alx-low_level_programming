#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all parameters inputed
 * @n: number of arguments passed
 *
 * Return: s
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list args;
	va_start(args, n);

	int s = 0;
	const unsigned int j;
	for (j = 0; j < n; j++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
