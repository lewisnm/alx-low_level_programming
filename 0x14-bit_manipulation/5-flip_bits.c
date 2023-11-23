#include "main.h"

/**
 * flip_bits - returns the no. of bits to flip to get to the nex no.
 * @n: The number
 * @m: The expected number to be flipped
 *
 * Return: The number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exlOr = n ^ m, bitsFlipped = 0;

	while (exlOr > 0)
	{
		bitsFlipped += (exlOr & 1);
		exlOr >>= 1;
	}

	return (bitsFlipped);
}
