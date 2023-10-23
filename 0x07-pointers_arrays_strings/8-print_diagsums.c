#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - main function
  *
  * @size: first function parameter
  *
  * @a: second function parameter
  *
  * Return: void.
  */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0;
	int sum1 = 0, sum2 = 0;

	for (; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
	}

	for (; j < size; j++)
	{
		sum2 += a[(size - 1) * (j + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
