#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip > 0)
	{
		count += flip & 1;
		flip >>= 1;
	}

	return (count);
}
