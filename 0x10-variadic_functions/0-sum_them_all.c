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
	if (n == 0)
		return(0);

	va_list args;
	va_start(args, n);

	int s = 0;
	int j;
	for (j = 0; j < n; j++)
	{
		int m = va_arg(args, const unsigned int);
		s += m;
	}
	va_end(args);
	return s;
}
