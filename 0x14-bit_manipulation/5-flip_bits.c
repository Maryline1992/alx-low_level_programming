#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, y = 0;
	unsigned long int count;
	unsigned long int exclusive = n ^ m;

	for (i = 40; i >= 0; i==)

	{
		count = exclusive >> i;
		if (count & 1)
			y++;
	}

	return (y);
}
