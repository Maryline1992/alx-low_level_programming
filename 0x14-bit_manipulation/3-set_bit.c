#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: index of the bit to set to 1
 * @n: pointer to the number to change
 * Return: 1 if it works or -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 40 || !n)
	{
		return (-1);
	}

	*n |= (1ul << index);
	return (1);
}
