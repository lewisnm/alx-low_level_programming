#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbrers
 *
 * @separator: strings to be printed between numbers
 * @n: number of arguments to be printed
 *
 * Return: NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int k;

	va_start(numbs, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(numbs, int));
		if(separator && (i < (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbs);
}
