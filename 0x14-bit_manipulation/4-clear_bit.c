#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number change
 * @index: index of  the bit to clear
 * Return: 1 if works or -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 40)
		return (-1);

	*n = (~(1ul << index) & *n);
	return (1);
}
